// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_269_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hc9c01d72__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hc9c01d72__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2532\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_270_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hf0213fbf__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hf0213fbf__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2533\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2534\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2535\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2536\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_10__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2538\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_diff_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN) 
               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp))))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_diff_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero) 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf) 
                               | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)) 
                                  | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedExp)))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa)));
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
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2539\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
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

extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h4b6776b8_0;

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2540\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2541\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2542\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2543\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2544\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2545\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
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

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2546\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2547\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2548\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2549\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2550\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2551\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2552\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2553\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2554\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2555\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    VL_SHIFTR_WWI(74,74,11, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_10, __Vtemp_9, ((IData)(vlSelf->__VdfgTmp_h595d58ac__0)
                                                    ? 0U
                                                    : 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_11[0U] = 1U;
    __Vtemp_11[1U] = 0U;
    __Vtemp_11[2U] = 0U;
    VL_SUB_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_5[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_12[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_12[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_12[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_5[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_5[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_5[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_5[2U])) 
                                                 << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_18, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_22[0U] = 1U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_23, __Vtemp_22, 
                  ((IData)(vlSelf->__VdfgTmp_hfc65b384__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_24[0U] = 1U;
    __Vtemp_24[1U] = 0U;
    __Vtemp_24[2U] = 0U;
    VL_SUB_W(3, __Vtemp_25, __Vtemp_23, __Vtemp_24);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_18[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_25[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_25[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_25[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_18[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_18[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_18[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_18[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_31, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_35[0U] = 1U;
    __Vtemp_35[1U] = 0U;
    __Vtemp_35[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_36, __Vtemp_35, 
                  ((IData)(vlSelf->__VdfgTmp_h5b3c7a68__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_37[0U] = 1U;
    __Vtemp_37[1U] = 0U;
    __Vtemp_37[2U] = 0U;
    VL_SUB_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_31[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_38[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_38[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_38[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_31[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_31[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_31[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_31[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_44, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_48[0U] = 1U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_49, __Vtemp_48, 
                  ((IData)(vlSelf->__VdfgTmp_h06867890__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_50[0U] = 1U;
    __Vtemp_50[1U] = 0U;
    __Vtemp_50[2U] = 0U;
    VL_SUB_W(3, __Vtemp_51, __Vtemp_49, __Vtemp_50);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_44[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_51[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_51[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_51[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_44[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_44[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_44[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_44[2U])) 
                                                  << 1U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2556(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2556\n"); );
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
    VL_SHIFTR_WWI(74,74,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_8, __Vtemp_7, ((IData)(vlSelf->__VdfgTmp_hf6591def__0)
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SUB_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_10[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_10[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_10[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_3[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_3[2U])) 
                                                 << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_16, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_21, __Vtemp_20, 
                  ((IData)(vlSelf->__VdfgTmp_h41b92650__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_22[0U] = 1U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 0U;
    VL_SUB_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_23[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_23[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_23[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_16[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_16[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_33[0U] = 1U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_34, __Vtemp_33, 
                  ((IData)(vlSelf->__VdfgTmp_ha00c6e8f__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_35[0U] = 1U;
    __Vtemp_35[1U] = 0U;
    __Vtemp_35[2U] = 0U;
    VL_SUB_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_36[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_36[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_36[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_29[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_29[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_42, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_46[0U] = 1U;
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_47, __Vtemp_46, 
                  ((IData)(vlSelf->__VdfgTmp_h46a2df62__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_48[0U] = 1U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 0U;
    VL_SUB_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_49[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_49[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_49[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_42[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_42[2U])) 
                                                  << 1U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2557(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2557\n"); );
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
    VL_SHIFTR_WWI(74,74,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_8, __Vtemp_7, ((IData)(vlSelf->__VdfgTmp_hf0647a03__0)
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SUB_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_10[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_10[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_10[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_3[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_3[2U])) 
                                                 << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_16, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_21, __Vtemp_20, 
                  ((IData)(vlSelf->__VdfgTmp_h672af83f__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_22[0U] = 1U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 0U;
    VL_SUB_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_23[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_23[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_23[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_16[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_16[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_33[0U] = 1U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_34, __Vtemp_33, 
                  ((IData)(vlSelf->__VdfgTmp_he8a8f1db__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_35[0U] = 1U;
    __Vtemp_35[1U] = 0U;
    __Vtemp_35[2U] = 0U;
    VL_SUB_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_36[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_36[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_36[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_29[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_29[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_42, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_46[0U] = 1U;
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_47, __Vtemp_46, 
                  ((IData)(vlSelf->__VdfgTmp_hce5d3800__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_48[0U] = 1U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 0U;
    VL_SUB_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_49[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_49[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_49[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_42[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_42[2U])) 
                                                  << 1U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2558(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2558\n"); );
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
    VL_SHIFTR_WWI(74,74,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_8, __Vtemp_7, ((IData)(vlSelf->__VdfgTmp_h4f6ffb8f__0)
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    VL_SUB_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) << 1U) | (0U != 
                                              (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                 & (__Vtemp_10[0U] 
                                                    | (- (IData)(
                                                                 (0x4aU 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                   & (__Vtemp_10[1U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                  & (__Vtemp_10[2U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[0U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  __Vtemp_3[1U]) 
                                                 << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_3[1U]) >> 0x1fU) | (((0x4aU 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_12__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & __Vtemp_3[2U])) 
                                                 << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_16, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_20[0U] = 1U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_21, __Vtemp_20, 
                  ((IData)(vlSelf->__VdfgTmp_h5c2d8a64__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_22[0U] = 1U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 0U;
    VL_SUB_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_23[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_23[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_23[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_16[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_16[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_13__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_16[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_33[0U] = 1U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_34, __Vtemp_33, 
                  ((IData)(vlSelf->__VdfgTmp_h52618ced__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_35[0U] = 1U;
    __Vtemp_35[1U] = 0U;
    __Vtemp_35[2U] = 0U;
    VL_SUB_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_36[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_36[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_36[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_29[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_29[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_14__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_29[2U])) 
                                                  << 1U));
    VL_SHIFTR_WWI(74,74,11, __Vtemp_42, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    __Vtemp_46[0U] = 1U;
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    VL_SHIFTL_WWI(74,74,7, __Vtemp_47, __Vtemp_46, 
                  ((IData)(vlSelf->__VdfgTmp_h7a78de76__0)
                    ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__expDiff))));
    __Vtemp_48[0U] = 1U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 0U;
    VL_SUB_W(3, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[0U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) << 1U) | (0U != 
                                               (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[0U] 
                                                  & (__Vtemp_49[0U] 
                                                     | (- (IData)(
                                                                  (0x4aU 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[1U] 
                                                    & (__Vtemp_49[1U] 
                                                       | (- (IData)(
                                                                    (0x4aU 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))))))) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in[2U] 
                                                   & (__Vtemp_49[2U] 
                                                      | (- (IData)(
                                                                   (0x4aU 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[1U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[0U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   __Vtemp_42[1U]) 
                                                  << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cff1cb3__0[2U] 
        = ((((0x4aU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0U : __Vtemp_42[1U]) >> 0x1fU) | ((
                                                   (0x4aU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_15__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & __Vtemp_42[2U])) 
                                                  << 1U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2559(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2559\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2560(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2560\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2561(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2561\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2562(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2562\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2563(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2563\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2564(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2564\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2565(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2565\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2566(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2566\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2567(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2567\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2568(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2568\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2569(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2569\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__2570(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__2570\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_15__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
}
