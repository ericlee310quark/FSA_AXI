// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1492(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1492\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    // Body
    VL_SHIFTR_WWI(74,74,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_8, __Vtemp_7, ((IData)(vlSelf->__VdfgTmp_h5628b691__0)
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SUB_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_10[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_10[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_10[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_3[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_3[2U])) 
                                                 << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_16, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_21, __Vtemp_20, 
                  ((IData)(vlSelf->__VdfgTmp_hde1f8886__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))));
    __Vtemp_22[0U] = 1U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 0U;
    VL_SUB_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_23[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_23[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_23[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_16[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_16[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_33[0U] = 1U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_34, __Vtemp_33, 
                  ((IData)(vlSelf->__VdfgTmp_hd3562d83__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))));
    __Vtemp_35[0U] = 1U;
    __Vtemp_35[1U] = 0U;
    __Vtemp_35[2U] = 0U;
    VL_SUB_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_36[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_36[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_36[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_29[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_29[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_42, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_46[0U] = 1U;
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_47, __Vtemp_46, 
                  ((IData)(vlSelf->__VdfgTmp_hda29e062__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))));
    __Vtemp_48[0U] = 1U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 0U;
    VL_SUB_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_49[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_49[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_49[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_42[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_42[2U])) 
                                                  << 1U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1493(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1493\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    VL_SHIFTR_WWI(74,74,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_8, __Vtemp_7, ((IData)(vlSelf->__VdfgTmp_ha39b07cf__0)
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SUB_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_10[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_10[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_10[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_3[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_3[2U])) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____VdfgTmp_h4798cd30__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_read_bits_addr)
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_1__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_2__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_3__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1494(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1494\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_4__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_5__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_6__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_7__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_21 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_28 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_35 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_1));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1495(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_42 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_49 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_56 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____VdfgTmp_h7fcc5b97__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_read_bits_addr)
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___writeQueue_io_enq_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_accRead_0_valid) 
           & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_accRead_0_addr))
               ? ((0xffU & (- (IData)((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))) 
                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__rBeatCnt))
               : ((0xffU & (- (IData)((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_7)))))) 
                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__rBeatCnt))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_8__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_9__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_10__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1496(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1496\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_11__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_12__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_13__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_14__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT____Vcellinp__banks_subBanks_sram_mem_15__R0_en 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_8) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_7) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_6) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_4) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_3) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_2) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_1) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_63 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_70 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_1));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1497(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1497\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_77 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_84 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_91 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_98 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_112 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readFire_0_15) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)) 
            & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0)) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp)) 
               & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_mantissa)) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub))) 
                 | ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_0_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_exp))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1498(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1498\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_0_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_15_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_15_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_exp)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1499(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1499\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_3_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_3_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1500(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1500\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_12_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_12_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_2_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_exp))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1501(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1501\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_2_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_13_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_13_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_exp)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1502(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1502\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_1_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_1_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1503(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1503\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_14_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_14_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_7_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_exp))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1504(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1504\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_7_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_8_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_8_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_exp)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1505(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1505\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1506(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1506\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_9_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_9_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_exp))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1507(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1507\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_10_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_10_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_exp)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1508(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1508\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_10_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_4_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1509(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1509\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_11_bits_T_2))
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_11_bits_T_2))
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_11_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | ((0x80U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_15_bits_T_2))
                                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_542_mantissa
                                                   : 0U))))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1510(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1510\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__reciprocal__DOT__reg_r_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__reciprocal__DOT__reg_r_isInf;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__reciprocal__DOT__xm_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__reciprocal__DOT__xm_isInf;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0 
        = (0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                        << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1515(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1515\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa 
        = (0x7fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                          << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0 
        = (0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                        << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__split__DOT___GEN_1 
        = (VL_GTS_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
           | (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                              >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa 
        = (0x7fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                          << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0 
        = (0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                        << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__split__DOT___GEN_1 
        = (VL_GTS_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
           | (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                              >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa 
        = (0x7fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_mantissa 
                          << (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT____Vcellinp__mulAddExp2__io_in_a_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1516(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1516\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1517(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1517\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____VdfgTmp_h04800923__0 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_d_ready) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_last)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_valid)));
    vlSelf->__VdfgTmp_h71ba4e1d__0 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                                      == (0x3fU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 8U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dFirst_size_hi))) 
            << 2U) | (((IData)((0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                             >> 1U)))) 
                       << 1U) | (IData)((0U != (5U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___dFirst_size_T_8))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_widget_anon_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___widx_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_asink_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_widget_anon_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_b_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_d_ready));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1518(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1518\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_r_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_param 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                   ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                              >> 3U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                                                ? (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x2aU))
                                                : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_size 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                   ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                              >> 5U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                                                ? (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x27U))
                                                : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_sink 
        = (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                   ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                              >> 0xcU)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x22U)))
                                                  : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_denied 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0) 
            & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                       >> 0xeU))) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1) 
                                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 0x21U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_corrupt 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0) 
            & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                       >> 0x2fU))) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                     ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 8U)) : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                                                  ? (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x23U))
                                                  : 0U)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1519(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1519\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_opcode 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)
                   : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                             ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x2cU)) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__w_addr 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT___io_in_ready_T_2)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT___mx_io_in_ready 
        = ((3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT___io_in_ready_T_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT____VdfgTmp_h4434c2cc__0) 
            << 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___index_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__index 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___index_T) 
           ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT____VdfgTmp_h4434c2cc__0) 
              << 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___axi4yank_auto_out_ar_valid) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___axi4yank_auto_out_aw_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_w_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__in_bits_mask 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___axi4yank_auto_out_ar_valid)
                    ? ((8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__mask_sub_1_1) 
                               << 3U) | (0xfffffff8U 
                                         & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_aw_bits_addr) 
                                             << 2U) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_aw_bits_addr) 
                                               << 3U))))) 
                       | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__mask_sub_1_1) 
                            | (2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_aw_bits_addr)))) 
                           << 2U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__mask_sub_0_1) 
                                       | (1U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_aw_bits_addr)))) 
                                      << 1U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__mask_sub_0_1) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_out_aw_bits_addr)))))))
                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                        ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram 
                                   >> 0x20U)) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_mask))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1520(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1520\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h90e31746__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0031d6a8__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0d8b36ae__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h76ad227a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2af19f29__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h36c7cd93__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc0b841e8__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd7120e94__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h38a2cc11__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he8e0e4fd__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1057b690__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6f8ae218__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1521(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1521\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3b05c2ac__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdc0fe5f6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf3436e3b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h04f9c818__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc454ada6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3857d5e4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h62a447a4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h91279262__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h15b933ad__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6b62e95f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he8341783__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5f01138a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1522(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he143e7ff__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1457baaf__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8acf1fb3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4f5ba3dc__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hae882254__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2886c06b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2255a4d6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha5cd759e__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h90a2769c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1f067bcb__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb1851270__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3dad7ff0__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1523(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1523\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6d1bf128__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf7cfb53d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb47fd2ee__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6485907f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3c794305__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he0a41c34__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4d1023fc__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb5500c95__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7a388702__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h963a974f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8316fe6d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8d9d0e51__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1524(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1524\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0d846ce9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h198be76d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he5ea7e29__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc4fb80da__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4e29ee28__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_had2a6629__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h337ed337__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6b272916__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc436d443__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc7d1de83__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he06cf09d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1129a276__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1525(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1525\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h53cba0c0__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h711687f2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6e0ec1f2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd03b7f91__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h79450826__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h257a76b4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7e365c4d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hbff3a5ae__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h9283a838__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb299fdcb__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2f0cc4b7__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7ea5cc87__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1526(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1526\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8f03a5da__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha63b063b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he597b43f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hff70b6ab__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0944f96f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hcbedad3c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6dffe914__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h48c49f59__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h61104cbb__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h51df9490__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha32cab8f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc799f796__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1527(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1527\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h374db4ed__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h10538e9d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h331468cf__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfc7403b9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5f4c67a2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb8b623c3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfc29cca5__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3894606a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdb32cb95__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8b655c87__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc05c799d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h99276b07__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h30b4a531__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4cf3f2c5__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h96bc874d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h46549dd6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h232504d2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hcb7152ae__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6601b442__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h97b348e9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h65d98b32__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h413a972a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfe4b94d7__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc1ea73a1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1529\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4219492f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8f1072f0__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf5a66f68__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h880c39f5__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h02bae0e4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1d1f8037__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_haaed652b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he6385084__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h916da671__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8a5b8260__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdb474902__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h9bec3bee__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1530(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1530\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb6641c8e__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1feaf736__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd423cb3b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he450c3eb__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7f5bb6ba__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8b1ba708__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0767bdec__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hbadcf9a2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h02fa0bac__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h472661cc__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h75b2797c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd3692c13__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdd11183c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h77cfd856__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hcb33e0c8__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4968187a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he5f33676__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h54f94dad__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hbb819cee__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h49362b26__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2fd8c371__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hcb9770d5__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf372578f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h64821408__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1532\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h14e405a1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h917d04b0__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h71b1bec3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8893b12b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0e726735__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4799fe6d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf307b67e__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h41a2c014__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3d13683b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h34eb0ce9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hcc95b217__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha9328bf7__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1533\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h558c3ba2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2b844c11__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he50b841c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb6f8fa46__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3bfc0901__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h38b68a6a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0c3d9e18__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8cf1a6c4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h81f3629c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5f62145c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfabc2067__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he1000420__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1534\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h56c89833__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hbcb5d893__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h81e4279e__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha53c7bcf__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7d87fe7f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h24f6c907__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf680c50c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h77347251__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h401e30d1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf9357dc4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h56cee53a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h81804420__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1535\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf766fdb3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h372a2555__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4b7afe33__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8bceed0b__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6394928f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0a058d8c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hacd3fea6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5460bf1f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha15877b3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc76b8e85__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h010032b9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb0b1111a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1536\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1d35a685__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hccc5de1c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h05d2c900__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h3b9fa789__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h9547bddf__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0e7b3ff1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8ccf9388__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2e197434__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6e19466c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hefb91c17__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd4e81d98__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h97016741__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_haac0be6a__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd341aca1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdfd8382c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h9d5480fd__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1226c163__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hb20e4339__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5ae13126__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h0159d808__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2371a0c1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h60cde7f3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h39ddf1b2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfa677b6d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1538\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdd67b233__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he1f549a4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h8a4b17b6__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h9a0b33a2__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_he964f338__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha42539e4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h86acdebc__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h83fc2785__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h7573ea06__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h95a81d42__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd21e95a4__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_haa7df1d3__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hf30e8199__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h338ce415__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h17a57639__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hd7c1a3b8__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h976afd53__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h5c1f9223__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h31804b53__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h40eecb1c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h4c36cf76__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h49a0e4f9__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h07120b87__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h6aa6cdc8__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1540\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_2) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_8)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_1_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_8) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_1_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_14)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_2_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_14) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_2_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_20)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_3_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_21 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_20) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_3_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_26)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_4_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_27 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_26) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_4_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_32)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_5_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_33 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_32) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_5_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_38)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_6_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_39 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_38) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_6_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_4_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_5_ready 
        = (1U & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_5_addr))
                  ? (((8U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_44)) 
                             << 3U)) | ((4U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_38)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_32)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_26)))))) 
                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rBeatCnt))
                  : (((8U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_20)) 
                             << 3U)) | ((4U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_14)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_8)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_2)))))) 
                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rBeatCnt))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1541\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeFire_5_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_44)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_7_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_45 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___GEN_44) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__writeValid_7_5));
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_3, __Vtemp_2);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_5[0U] = __Vtemp_3[0U];
        __Vtemp_5[1U] = __Vtemp_3[1U];
        __Vtemp_5[2U] = __Vtemp_3[2U];
    } else {
        __Vtemp_5[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_5[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_5[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_7[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_7[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_7[2U]);
    __Vtemp_9[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_9[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_9[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_10, __Vtemp_9);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_12[0U] = __Vtemp_10[0U];
        __Vtemp_12[1U] = __Vtemp_10[1U];
        __Vtemp_12[2U] = __Vtemp_10[2U];
    } else {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_13[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_13[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_13[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_14[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_14[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_14[2U]);
    __Vtemp_16[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_16[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_16[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_17, __Vtemp_16);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_19[0U] = __Vtemp_17[0U];
        __Vtemp_19[1U] = __Vtemp_17[1U];
        __Vtemp_19[2U] = __Vtemp_17[2U];
    } else {
        __Vtemp_19[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_19[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_19[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_20[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_20[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_20[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_21[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_21[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_21[2U]);
    __Vtemp_23[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_23[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_23[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_24, __Vtemp_23);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_26[0U] = __Vtemp_24[0U];
        __Vtemp_26[1U] = __Vtemp_24[1U];
        __Vtemp_26[2U] = __Vtemp_24[2U];
    } else {
        __Vtemp_26[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_26[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_26[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_27[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_27[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_27[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_28, __Vtemp_26, __Vtemp_27);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_28[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_28[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_28[2U]);
    __Vtemp_30[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_30[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_30[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_31, __Vtemp_30);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_33[0U] = __Vtemp_31[0U];
        __Vtemp_33[1U] = __Vtemp_31[1U];
        __Vtemp_33[2U] = __Vtemp_31[2U];
    } else {
        __Vtemp_33[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_33[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_33[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_34[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_34[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_34[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_35, __Vtemp_33, __Vtemp_34);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_35[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_35[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_35[2U]);
    __Vtemp_37[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_37[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_37[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_38, __Vtemp_37);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_40[0U] = __Vtemp_38[0U];
        __Vtemp_40[1U] = __Vtemp_38[1U];
        __Vtemp_40[2U] = __Vtemp_38[2U];
    } else {
        __Vtemp_40[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_40[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_40[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_41[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_41[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_41[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_42[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_42[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_42[2U]);
    __Vtemp_44[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_44[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_44[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_45, __Vtemp_44);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_47[0U] = __Vtemp_45[0U];
        __Vtemp_47[1U] = __Vtemp_45[1U];
        __Vtemp_47[2U] = __Vtemp_45[2U];
    } else {
        __Vtemp_47[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_47[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_47[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_48[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_48[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_48[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_49[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_49[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_49[2U]);
    __Vtemp_51[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_51[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_51[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_52, __Vtemp_51);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_54[0U] = __Vtemp_52[0U];
        __Vtemp_54[1U] = __Vtemp_52[1U];
        __Vtemp_54[2U] = __Vtemp_52[2U];
    } else {
        __Vtemp_54[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_54[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_54[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_55[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_55[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_55[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_56, __Vtemp_54, __Vtemp_55);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_56[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_56[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_56[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1542\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    // Body
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_3, __Vtemp_2);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_5[0U] = __Vtemp_3[0U];
        __Vtemp_5[1U] = __Vtemp_3[1U];
        __Vtemp_5[2U] = __Vtemp_3[2U];
    } else {
        __Vtemp_5[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_5[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_5[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_7[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_7[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_7[2U]);
    __Vtemp_9[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_9[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_9[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_10, __Vtemp_9);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_12[0U] = __Vtemp_10[0U];
        __Vtemp_12[1U] = __Vtemp_10[1U];
        __Vtemp_12[2U] = __Vtemp_10[2U];
    } else {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_13[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_13[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_13[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_14[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_14[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_14[2U]);
    __Vtemp_16[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_16[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_16[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_17, __Vtemp_16);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_19[0U] = __Vtemp_17[0U];
        __Vtemp_19[1U] = __Vtemp_17[1U];
        __Vtemp_19[2U] = __Vtemp_17[2U];
    } else {
        __Vtemp_19[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_19[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_19[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_20[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_20[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_20[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_21[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_21[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_21[2U]);
    __Vtemp_23[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_23[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_23[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_24, __Vtemp_23);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_26[0U] = __Vtemp_24[0U];
        __Vtemp_26[1U] = __Vtemp_24[1U];
        __Vtemp_26[2U] = __Vtemp_24[2U];
    } else {
        __Vtemp_26[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_26[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_26[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_27[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_27[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_27[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_28, __Vtemp_26, __Vtemp_27);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_28[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_28[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_28[2U]);
    __Vtemp_30[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_30[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_30[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_31, __Vtemp_30);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_33[0U] = __Vtemp_31[0U];
        __Vtemp_33[1U] = __Vtemp_31[1U];
        __Vtemp_33[2U] = __Vtemp_31[2U];
    } else {
        __Vtemp_33[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_33[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_33[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_34[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_34[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_34[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_35, __Vtemp_33, __Vtemp_34);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_35[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_35[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_35[2U]);
    __Vtemp_37[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_37[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_37[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_38, __Vtemp_37);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_40[0U] = __Vtemp_38[0U];
        __Vtemp_40[1U] = __Vtemp_38[1U];
        __Vtemp_40[2U] = __Vtemp_38[2U];
    } else {
        __Vtemp_40[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_40[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_40[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_41[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_41[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_41[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_42[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_42[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_42[2U]);
    __Vtemp_44[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_44[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_44[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_45, __Vtemp_44);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_47[0U] = __Vtemp_45[0U];
        __Vtemp_47[1U] = __Vtemp_45[1U];
        __Vtemp_47[2U] = __Vtemp_45[2U];
    } else {
        __Vtemp_47[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_47[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_47[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_48[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_48[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_48[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_49[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_49[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_49[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_14) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_1_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_22 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_21) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_2_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_29 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_28) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_3_2));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1543\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_36 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_35) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_4_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_43 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_42) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_5_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_49) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_6_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_57 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_56) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_7_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_64 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_63) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_8_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_71 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_70) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_9_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_78 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_77) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_10_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_85 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_84) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_11_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_92 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_91) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_12_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_98) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_13_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_106 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_105) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_14_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___writeQueue_io_enq_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_accRead_1_valid) 
           & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_accRead_1_addr))
               ? (((0x80U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_112)) 
                             << 7U)) | ((0x40U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_105)) 
                                                  << 6U)) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_98)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_91)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_84)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_77)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_70)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_63)))))))))) 
                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__rBeatCnt))
               : (((0x80U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_56)) 
                             << 7U)) | ((0x40U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_49)) 
                                                  << 6U)) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_42)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_35)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_28)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_21)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_14)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_7)))))))))) 
                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__rBeatCnt))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1544\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_113 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___GEN_112) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__readValid_15_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp) 
                                                 - (IData)(0x7fU)) 
                                                >> 8U)))) 
                                   << 9U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_0_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_0_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1545\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_15_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_15_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_3_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1546\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_12_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_12_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_2_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_2_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1547\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_13_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_13_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_1_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_1_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1548\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_14_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_14_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_7_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_7_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1549\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_8_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_8_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_6_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__1550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__1550\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_9_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_9_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
            = (QData)((IData)((0xffff000U & (((0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__reg_mantissa)))) 
                                              * (0x80U 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_5_mantissa))) 
                                             << 0xcU))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
}
