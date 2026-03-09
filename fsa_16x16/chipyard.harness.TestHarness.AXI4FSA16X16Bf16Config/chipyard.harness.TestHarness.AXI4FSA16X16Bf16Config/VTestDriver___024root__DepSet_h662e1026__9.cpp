// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4478(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4478\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((8U & ((((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                   | (((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                       & (0U == (((2U 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                  | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                 | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))) 
                                      & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 1U))))) 
                                  | (((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                          | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U))) 
                                     & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                            | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                 << 3U)) | ((4U & (
                                                   (((0U 
                                                      != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                     | (((7U 
                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                         & (0U 
                                                            == 
                                                            (((2U 
                                                               ^ 
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                              | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                             | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                             | (7U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U))))) 
                                                    | ((~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                       & ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((((0U 
                                                      != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                     | ((~ 
                                                         ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & ((7U 
                                                            != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                           & (0U 
                                                              == 
                                                              (((2U 
                                                                 ^ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                                | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                               | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))))) 
                                                    | ((~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                    >> 1U)))) 
                                                       & ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((0U 
                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                      | ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                             | (7U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & ((7U 
                                                             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                            & (0U 
                                                               == 
                                                               (((2U 
                                                                  ^ 
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                                 | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                                | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))))) 
                                                     | ((~ 
                                                         ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (~ 
                                                           ((~ 
                                                             ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                              | (7U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:317: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 317, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:319: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 319, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4479(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4479\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:323: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 323, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:325: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 325, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:329: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 329, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:331: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 331, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4480(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4480\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((8U & ((((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                   | (((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                       & (0U == (((2U 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                  | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                 | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))) 
                                      & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                             | (7U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 1U))))) 
                                  | (((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                          | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U))) 
                                     & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                            | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                 << 3U)) | ((4U & (
                                                   (((0U 
                                                      != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                     | (((7U 
                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                         & (0U 
                                                            == 
                                                            (((2U 
                                                               ^ 
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                              | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                             | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                             | (7U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U))))) 
                                                    | ((~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                       & ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U))))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((((0U 
                                                      != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                     | ((~ 
                                                         ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & ((7U 
                                                            != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                           & (0U 
                                                              == 
                                                              (((2U 
                                                                 ^ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                                | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                               | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))))) 
                                                    | ((~ 
                                                        ((~ 
                                                          ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                    >> 1U)))) 
                                                       & ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (((0U 
                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
                                                      | ((~ 
                                                          ((~ 
                                                            ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                             | (7U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & ((7U 
                                                             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                                                            & (0U 
                                                               == 
                                                               (((2U 
                                                                  ^ 
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[0U]) 
                                                                 | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[1U]) 
                                                                | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__raw_size[2U]))))) 
                                                     | ((~ 
                                                         ((~ 
                                                           ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                            | (7U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (~ 
                                                           ((~ 
                                                             ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                              | (7U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:335: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 335, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:337: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 337, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4481(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4481\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:341: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 341, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:343: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 343, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 8U))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:347: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 347, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:349: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 349, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0ULL == (0xc0ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:353: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 353, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:355: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 355, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4482(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4482\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:359: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 359, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:361: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 361, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0x2cU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:365: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 365, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:367: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 367, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0xbU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:371: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 371, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:373: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 373, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4483(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4483\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x104ULL == (0x107ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:377: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 377, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:379: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 379, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (4ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:383: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 383, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:385: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 385, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4484(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4484\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1cULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:389: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 389, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:391: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 391, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x14ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:395: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 395, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:397: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 397, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4485(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4485\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x100000000004ULL == (0x100000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:401: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 401, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:403: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 403, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x105ULL == (0x107ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:407: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 407, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:409: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 409, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4486(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4486\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (5ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:413: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 413, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:415: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 415, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1dULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:419: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 419, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:421: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 421, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4487(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4487\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x15ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:425: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 425, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:427: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 427, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0x800ULL != (0x100000000800ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:431: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 431, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:433: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 433, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4488(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4488\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x100ULL == (0x107ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:437: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 437, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:439: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 439, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:443: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 443, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:445: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 445, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4489(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4489\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x100000000000ULL == (0x100000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:449: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:451: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 451, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x101ULL == (0x107ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:455: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:457: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 457, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4490(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4490\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:461: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:463: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 463, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0x800ULL != (0x100000000800ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:467: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:469: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 469, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4491(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4491\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x102ULL == (0x107ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:473: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 473, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:475: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 475, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:479: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 479, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:481: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 481, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4492(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4492\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x100000000002ULL == (0x100000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:485: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 485, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:487: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 487, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & (((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                          ? 1U : 4U) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:491: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 491, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:493: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 493, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4493(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4493\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:497: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 497, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:499: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 499, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:503: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 503, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:505: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 505, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:509: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 509, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:511: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 511, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4494(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4494\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 3U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:515: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 515, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:517: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 517, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:521: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 521, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:523: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 523, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4495(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4495\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 8U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:527: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 527, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:529: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 529, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 9U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:533: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 533, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:535: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 535, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4496(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4496\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:539: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 539, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:541: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 541, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:545: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 545, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:547: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 547, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (~ ((3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight) 
                                  >> (1U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 8U))))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:551: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 551, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:553: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 553, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4497(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4497\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * ((7U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                ? 1U
                                                : 4U))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                   ? 1U
                                                   : 4U)))))
                                 : 0U)) | ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    ((7U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                      ? 1U
                                                      : 4U))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          ((7U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                            ? 1U
                                                            : 4U)))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:557: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 557, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:559: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 559, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4498(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4498\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size) 
                        != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                          >> 5U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:563: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 563, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:565: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 565, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                              >> 8U)) 
                                                     << 2U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                   >> 8U)) 
                                                          << 2U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                      >> 8U)) 
                                                             << 2U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                            >> 8U)) 
                                                                   << 2U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:569: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 569, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:571: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 571, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4499(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4499\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != 
                        (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes) 
                                >> (4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                   >> 8U)) 
                                          << 2U))) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:575: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 575, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:577: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 577, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid)) 
                        & (~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                      >> 8U)))) & (6U 
                                                   != 
                                                   (7U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (~ ((~ ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)) 
                               | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_a_ready)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:581: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 581, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:583: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 583, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4500(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4500\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                                   & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                  != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_33) 
                                      & (~ (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 8U))))) 
                                 | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:587: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 587, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:589: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 589, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:593: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 593, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:595: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 595, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4501(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4501\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1) 
                                 >> (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                   >> 8U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:599: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 599, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:601: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 601, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != 
                        (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
                                >> (4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                   >> 8U)) 
                                          << 2U))) 
                               >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:605: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 605, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:607: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 607, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4502(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4502\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:611: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 611, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:613: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 613, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4552\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv:143: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.fbus_xbar: Assertion failed\n    at Arbiter.scala:77 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv", 143, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv:145: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.fbus_xbar\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv", 145, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4553\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_to_fsa_auto_tl_in_d_valid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_1))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv:149: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.fbus_xbar: Assertion failed\n    at Arbiter.scala:79 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv", 149, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv:151: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.fbus_xbar\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLXbar_fbus_i1_o2_a16d32s4k2z3u.sv", 151, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                            >> 8U))) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 180, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 182, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4554\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (0x300000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 186, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 188, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 194, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4555\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x300000U == (0x380600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 200, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 204, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 206, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4556(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4556\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                    >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 210, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 212, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0xfU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 216, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 218, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4557(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4557\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x300000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 222, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 224, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                            >> 8U))) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 228, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 230, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4558(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4558\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (0x380000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 234, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 236, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 240, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 242, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4559(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4559\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x380000U == (0x380600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 246, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 248, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 252, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 254, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4560(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4560\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                    >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 258, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 260, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                >> 0x10U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 264, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 266, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4561(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4561\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0xfU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 270, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 272, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x380000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 276, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 278, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4562(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4562\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 282, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 284, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U))) & 
                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9) 
                            | (0x80U == (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                  >> 8U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 288, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 290, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4563(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4563\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 294, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 296, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 300, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 302, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4564(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4564\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                     >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 306, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 308, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                        != (((1U & ((0U != (0x600U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                    | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U) & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                   >> 1U)) 
                                       | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                           >> 1U) & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                             << 3U) | (((1U & ((0U 
                                                != 
                                                (0x600U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                      >> 1U)) 
                                                  | ((~ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                        >> 1U))))) 
                                        << 2U) | ((
                                                   (1U 
                                                    & ((0U 
                                                        != 
                                                        (0x600U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                             >> 1U)) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                              >> 8U)) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                >> 1U)) 
                                                              & (~ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 312, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 314, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4565(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4565\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x200000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 318, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 320, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x380000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                            >> 8U))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9) 
                                 | (0x80U == (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                 >> 8U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 324, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 326, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4566(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4566\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x380000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 330, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 332, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x380000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 336, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 338, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4567(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4567\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x380000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                     >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 342, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 344, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x380000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                        != (((1U & ((0U != (0x600U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                    | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U) & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                   >> 1U)) 
                                       | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                           >> 1U) & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                             << 3U) | (((1U & ((0U 
                                                != 
                                                (0x600U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                      >> 1U)) 
                                                  | ((~ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                        >> 1U))))) 
                                        << 2U) | ((
                                                   (1U 
                                                    & ((0U 
                                                        != 
                                                        (0x600U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                             >> 1U)) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                              >> 8U)) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                >> 1U)) 
                                                              & (~ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 348, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:350: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 350, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4568(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4568\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x80000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                            >> 8U))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9) 
                                 | (0x80U == (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                 >> 8U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 354, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:356: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 356, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x80000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 360, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:362: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 362, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4569(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4569\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x80000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 366, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:368: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 368, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x80000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                     >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 372, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 374, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4570(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4570\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x80000U == (0x380000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                               & (~ (((1U & ((0U != 
                                              (0x600U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                             | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                  >> 8U) 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                    >> 1U)) 
                                                | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                    >> 1U) 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                                      << 3U) | (((1U 
                                                  & ((0U 
                                                      != 
                                                      (0x600U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                     | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                          >> 8U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                            >> 1U)) 
                                                        | ((~ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U))))) 
                                                 << 2U) 
                                                | (((1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0U 
                                                          != 
                                                          (0x600U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                         | (((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                               >> 1U)) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                >> 8U)) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                 >> 1U)) 
                                                               & (~ 
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 378, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 380, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4571(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4571\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x100000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                  >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 384, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 386, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x100000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 390, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:392: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 392, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4572(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4572\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x100000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 396, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:398: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 398, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x100000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                    >> 0x10U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 402, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:404: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 404, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4573(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4573\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x100000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                        != (((1U & ((0U != (0x600U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                    | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U) & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                   >> 1U)) 
                                       | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                           >> 1U) & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                             << 3U) | (((1U & ((0U 
                                                != 
                                                (0x600U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                      >> 1U)) 
                                                  | ((~ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                        >> 1U))))) 
                                        << 2U) | ((
                                                   (1U 
                                                    & ((0U 
                                                        != 
                                                        (0x600U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                             >> 1U)) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                              >> 8U)) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                >> 1U)) 
                                                              & (~ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 408, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:410: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 410, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4574(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4574\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x180000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                  >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 414, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:416: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 416, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x180000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 420, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:422: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 422, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4575(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4575\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x180000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 426, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:428: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 428, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1c0000U == (0x3c0000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 432, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:434: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4576(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4576\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x180000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                        != (((1U & ((0U != (0x600U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                    | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U) & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                   >> 1U)) 
                                       | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                           >> 1U) & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                             << 3U) | (((1U & ((0U 
                                                != 
                                                (0x600U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                      >> 1U)) 
                                                  | ((~ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                        >> 1U))))) 
                                        << 2U) | ((
                                                   (1U 
                                                    & ((0U 
                                                        != 
                                                        (0x600U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                             >> 1U)) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                              >> 8U)) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                >> 1U)) 
                                                              & (~ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 438, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:440: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 440, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4577(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4577\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok) 
                           & ((7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                            >> 8U))) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_9))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 444, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:446: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 446, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 450, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:452: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 452, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4578(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4578\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                   >> 8U)))) 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 456, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:458: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 458, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                     >> 0x11U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 462, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:464: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 464, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4579(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4579\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask) 
                        != (((1U & ((0U != (0x600U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                    | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                         >> 8U) & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                   >> 1U)) 
                                       | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                           >> 1U) & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))) 
                             << 3U) | (((1U & ((0U 
                                                != 
                                                (0x600U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                      >> 1U)) 
                                                  | ((~ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                        >> 1U))))) 
                                        << 2U) | ((
                                                   (1U 
                                                    & ((0U 
                                                        != 
                                                        (0x600U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                             >> 1U)) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                              >> 8U)) 
                                                          | (1U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U]))))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])) 
                                                        | (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                              >> 1U)) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 8U)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                >> 1U)) 
                                                              & (~ 
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 468, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:470: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 470, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4580(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4580\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x280000U == (0x380000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 474, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:476: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 476, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
                     & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 480, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:482: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 482, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4581(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4581\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 486, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:488: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 488, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0ULL == (0xc0ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 492, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:494: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 494, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4582(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4582\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 498, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:500: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 500, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0x2fU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 504, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:506: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 506, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4583(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4583\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0xeU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 510, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:512: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 512, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 516, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:518: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 518, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4584(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4584\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (4ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 522, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:524: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 524, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1cULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 528, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:530: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 530, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4585(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4585\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x14ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 534, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:536: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 536, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x800000000004ULL == (0x800000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 540, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:542: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 542, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4586(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4586\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 546, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:548: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 548, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (5ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 552, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:554: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 554, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4587(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4587\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1dULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 558, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:560: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 560, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x15ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 564, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:566: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 566, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4588(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4588\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0x4000ULL != (0x800000004000ULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 570, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:572: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 572, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 576, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:578: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 578, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4589(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4589\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 582, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:584: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 584, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x800000000000ULL == (0x800000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 588, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:590: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 590, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4590(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4590\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 594, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:596: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 596, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_3.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/testchipip/src/main/scala/serdes/PeripheryTLSerial.scala:149:77)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 600, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_3.sv:602: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_from_port_named_serial_tl_0_in.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_3.sv", 602, "");
        }
    }
}
