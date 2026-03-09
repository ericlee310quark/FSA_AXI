// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__405(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__405\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 319, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:321: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 321, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & (0U != (3U & ((~ ((IData)(3U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 325, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:327: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 327, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__406(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__406\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & (4U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                         << 4U) | (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                   >> 0x1cU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 331, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:333: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 333, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_mask) 
                        != ((8U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                     << 3U) | (0xfffffff8U 
                                               & ((((2U 
                                                     >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                     << 2U)))) 
                                   | (0xfffffff8U & 
                                      (((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                        << 2U) & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                  << 3U))))) 
                            | ((4U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                        << 2U) | (0xfffffffcU 
                                                  & ((((2U 
                                                        >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                        << 1U)))) 
                                      | ((IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0)))) 
                                         << 2U))) | 
                               ((2U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                         | ((~ ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                >> 1U)) 
                                            & ((2U 
                                                >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))) 
                                       << 1U)) | (1U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                           >> 1U)) 
                                                         & ((2U 
                                                             >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:337: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 337, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:339: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 339, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__407(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__407\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:343: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 343, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:345: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 345, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & (0U != (3U & ((~ ((IData)(3U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 349, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:351: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 351, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__408(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__408\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                              << 4U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                        >> 0x1cU))) 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 355, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:357: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 357, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_mask) 
                        != ((8U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                     << 3U) | (0xfffffff8U 
                                               & ((((2U 
                                                     >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                     << 2U)))) 
                                   | (0xfffffff8U & 
                                      (((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                        << 2U) & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                  << 3U))))) 
                            | ((4U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                        << 2U) | (0xfffffffcU 
                                                  & ((((2U 
                                                        >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                        << 1U)))) 
                                      | ((IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0)))) 
                                         << 2U))) | 
                               ((2U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                         | ((~ ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                >> 1U)) 
                                            & ((2U 
                                                >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))) 
                                       << 1U)) | (1U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                           >> 1U)) 
                                                         & ((2U 
                                                             >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:361: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 361, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:363: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 363, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__409(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__409\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:367: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 367, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:369: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 369, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & (0U != (3U & ((~ ((IData)(3U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:373: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 373, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:375: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 375, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__410(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__410\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & (0U != (3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                           << 4U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                           >> 0x1cU))) 
                                     >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:379: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 379, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:381: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 381, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_mask) 
                        != ((8U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                     << 3U) | (0xfffffff8U 
                                               & ((((2U 
                                                     >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                     << 2U)))) 
                                   | (0xfffffff8U & 
                                      (((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                        << 2U) & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                  << 3U))))) 
                            | ((4U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                        << 2U) | (0xfffffffcU 
                                                  & ((((2U 
                                                        >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                        << 1U)))) 
                                      | ((IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0)))) 
                                         << 2U))) | 
                               ((2U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                         | ((~ ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                >> 1U)) 
                                            & ((2U 
                                                >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))) 
                                       << 1U)) | (1U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hd3f2ef02__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_hdc866bf5__0) 
                                                           >> 1U)) 
                                                         & ((2U 
                                                             >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->__VdfgTmp_hdc866bf5__0))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:385: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 385, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:387: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 387, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__411(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__411\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:391: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 391, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:393: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 393, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:433: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 433, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:435: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__412(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__412\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                    << 4U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 0x1cU)))) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__param))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:439: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 439, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:441: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 441, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__size))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 445, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:447: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 447, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__413(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__413\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__source))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 451, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:453: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 453, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_address) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 457, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:459: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__414(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__414\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 463, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:465: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 465, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 469, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:471: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__415(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__415\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 475, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:477: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 477, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__denied)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 481, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:483: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__416(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__416\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(512,512,9, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset))) 
                     & __Vtemp_1[0U]))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:487: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 487, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:489: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 489, "");
        }
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset))) 
                     & (~ (__Vtemp_2[0U] | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:493: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 493, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:495: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__417(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__417\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:499: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 499, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:501: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 501, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__418(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__418\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    VlWide<64>/*2047:0*/ __Vtemp_2;
    VlWide<64>/*2047:0*/ __Vtemp_3;
    VlWide<64>/*2047:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_size))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:505: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 505, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:507: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 507, "");
        }
    }
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_2[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_3[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_4[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:511: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 511, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:513: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 513, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__419(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__419\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(2048,2048,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_size) 
                        != (7U & (__Vtemp_1[0U] >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:517: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 517, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:519: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 519, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23) 
                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid)) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source) 
                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_a_ready)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:523: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 523, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:525: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 525, "");
        }
    }
}

extern const VlWide<16>/*511:0*/ VTestDriver__ConstPool__CONST_h1c449781_0;
extern const VlWide<16>/*511:0*/ VTestDriver__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__420(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__420\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_6;
    // Body
    VL_SHIFTL_WWI(512,512,9, __Vtemp_1, VTestDriver__ConstPool__CONST_h1c449781_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source));
    __Vtemp_3[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    __Vtemp_3[5U] = 0U;
    __Vtemp_3[6U] = 0U;
    __Vtemp_3[7U] = 0U;
    __Vtemp_3[8U] = 0U;
    __Vtemp_3[9U] = 0U;
    __Vtemp_3[0xaU] = 0U;
    __Vtemp_3[0xbU] = 0U;
    __Vtemp_3[0xcU] = 0U;
    __Vtemp_3[0xdU] = 0U;
    __Vtemp_3[0xeU] = 0U;
    __Vtemp_3[0xfU] = 0U;
    VL_SHIFTL_WWW(512,512,512, __Vtemp_4, VTestDriver__ConstPool__CONST_h1c449781_0, __Vtemp_3);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_6, VTestDriver__ConstPool__CONST_h1c449781_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ ((0U != (((((((((((
                                                   (((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_1[0U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[0U]) 
                                                        ^ 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                          ? 
                                                         __Vtemp_4[0U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[0U])) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                            ? 
                                                           __Vtemp_1[1U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h93e1b771_0[1U]) 
                                                          ^ 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                            ? 
                                                           __Vtemp_4[1U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h93e1b771_0[1U]))) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                           ? 
                                                          __Vtemp_1[2U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h93e1b771_0[2U]) 
                                                         ^ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                           ? 
                                                          __Vtemp_4[2U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h93e1b771_0[2U]))) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_1[3U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[3U]) 
                                                        ^ 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                          ? 
                                                         __Vtemp_4[3U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[3U]))) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                         ? 
                                                        __Vtemp_1[4U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h93e1b771_0[4U]) 
                                                       ^ 
                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                         ? 
                                                        __Vtemp_4[4U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h93e1b771_0[4U]))) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_1[5U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h93e1b771_0[5U]) 
                                                      ^ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                        ? 
                                                       __Vtemp_4[5U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h93e1b771_0[5U]))) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_1[6U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h93e1b771_0[6U]) 
                                                     ^ 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                       ? 
                                                      __Vtemp_4[6U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h93e1b771_0[6U]))) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_1[7U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h93e1b771_0[7U]) 
                                                    ^ 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                      ? 
                                                     __Vtemp_4[7U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h93e1b771_0[7U]))) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_1[8U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h93e1b771_0[8U]) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                     ? 
                                                    __Vtemp_4[8U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h93e1b771_0[8U]))) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_1[9U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h93e1b771_0[9U]) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                    ? 
                                                   __Vtemp_4[9U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h93e1b771_0[9U]))) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_1[0xaU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU]) 
                                                 ^ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                   ? 
                                                  __Vtemp_4[0xaU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU]))) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_1[0xbU]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU]) 
                                                ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                    ? 
                                                   __Vtemp_4[0xbU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU]))) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_1[0xcU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU]) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                   ? 
                                                  __Vtemp_4[0xcU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU]))) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_1[0xdU]
                                                : VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU]) 
                                              ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                  ? 
                                                 __Vtemp_4[0xdU]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU]))) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_1[0xeU]
                                               : VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU]) 
                                             ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                 ? 
                                                __Vtemp_4[0xeU]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU]))) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? __Vtemp_1[0xfU]
                                              : VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU]) 
                                            ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_23)
                                                ? __Vtemp_4[0xfU]
                                                : VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU])))) 
                                 | (0U == (((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h93e1b771_0[0U] 
                                                          ^ 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                            ? 
                                                           __Vtemp_6[0U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h93e1b771_0[0U])) 
                                                         | (VTestDriver__ConstPool__CONST_h93e1b771_0[1U] 
                                                            ^ 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                              ? 
                                                             __Vtemp_6[1U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h93e1b771_0[1U]))) 
                                                        | (VTestDriver__ConstPool__CONST_h93e1b771_0[2U] 
                                                           ^ 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                             ? 
                                                            __Vtemp_6[2U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_h93e1b771_0[2U]))) 
                                                       | (VTestDriver__ConstPool__CONST_h93e1b771_0[3U] 
                                                          ^ 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                            ? 
                                                           __Vtemp_6[3U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h93e1b771_0[3U]))) 
                                                      | (VTestDriver__ConstPool__CONST_h93e1b771_0[4U] 
                                                         ^ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                           ? 
                                                          __Vtemp_6[4U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h93e1b771_0[4U]))) 
                                                     | (VTestDriver__ConstPool__CONST_h93e1b771_0[5U] 
                                                        ^ 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_6[5U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[5U]))) 
                                                    | (VTestDriver__ConstPool__CONST_h93e1b771_0[6U] 
                                                       ^ 
                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                         ? 
                                                        __Vtemp_6[6U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h93e1b771_0[6U]))) 
                                                   | (VTestDriver__ConstPool__CONST_h93e1b771_0[7U] 
                                                      ^ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_6[7U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h93e1b771_0[7U]))) 
                                                  | (VTestDriver__ConstPool__CONST_h93e1b771_0[8U] 
                                                     ^ 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_6[8U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h93e1b771_0[8U]))) 
                                                 | (VTestDriver__ConstPool__CONST_h93e1b771_0[9U] 
                                                    ^ 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_6[9U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h93e1b771_0[9U]))) 
                                                | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU] 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_6[0xaU]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU]))) 
                                               | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_6[0xbU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU]))) 
                                              | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU] 
                                                 ^ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_6[0xcU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU]))) 
                                             | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU] 
                                                ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_6[0xdU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU]))) 
                                            | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU] 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_6[0xeU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU]))) 
                                           | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU] 
                                              ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_6[0xfU]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU])))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:529: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 529, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:531: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 531, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (((0U == ((((((((((
                                                   ((((((VTestDriver__ConstPool__CONST_h93e1b771_0[0U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U]) 
                                                        | (VTestDriver__ConstPool__CONST_h93e1b771_0[1U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U])) 
                                                       | (VTestDriver__ConstPool__CONST_h93e1b771_0[2U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U])) 
                                                      | (VTestDriver__ConstPool__CONST_h93e1b771_0[3U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])) 
                                                     | (VTestDriver__ConstPool__CONST_h93e1b771_0[4U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[4U])) 
                                                    | (VTestDriver__ConstPool__CONST_h93e1b771_0[5U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[5U])) 
                                                   | (VTestDriver__ConstPool__CONST_h93e1b771_0[6U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[6U])) 
                                                  | (VTestDriver__ConstPool__CONST_h93e1b771_0[7U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[7U])) 
                                                 | (VTestDriver__ConstPool__CONST_h93e1b771_0[8U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[8U])) 
                                                | (VTestDriver__ConstPool__CONST_h93e1b771_0[9U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[9U])) 
                                               | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xaU])) 
                                              | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xbU])) 
                                             | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xcU])) 
                                            | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xdU])) 
                                           | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xeU])) 
                                          | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight[0xfU]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:535: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: TileLink timeout expired (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 535, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:537: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 537, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__421(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__421\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (((0U == ((((((((((
                                                   ((((((VTestDriver__ConstPool__CONST_h93e1b771_0[0U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U]) 
                                                        | (VTestDriver__ConstPool__CONST_h93e1b771_0[1U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U])) 
                                                       | (VTestDriver__ConstPool__CONST_h93e1b771_0[2U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U])) 
                                                      | (VTestDriver__ConstPool__CONST_h93e1b771_0[3U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])) 
                                                     | (VTestDriver__ConstPool__CONST_h93e1b771_0[4U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[4U])) 
                                                    | (VTestDriver__ConstPool__CONST_h93e1b771_0[5U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[5U])) 
                                                   | (VTestDriver__ConstPool__CONST_h93e1b771_0[6U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[6U])) 
                                                  | (VTestDriver__ConstPool__CONST_h93e1b771_0[7U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[7U])) 
                                                 | (VTestDriver__ConstPool__CONST_h93e1b771_0[8U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[8U])) 
                                                | (VTestDriver__ConstPool__CONST_h93e1b771_0[9U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[9U])) 
                                               | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xaU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xaU])) 
                                              | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xbU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xbU])) 
                                             | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xcU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xcU])) 
                                            | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xdU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xdU])) 
                                           | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xeU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xeU])) 
                                          | (VTestDriver__ConstPool__CONST_h93e1b771_0[0xfU] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xfU]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_11.sv:553: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor: Assertion failed: TileLink timeout expired (connected at generators/fsa/src/main/scala/fsa/Configs.scala:75:20)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 553, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_11.sv:555: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.tl2axi4.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_11.sv", 555, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__exp2_counter_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__exp2_counter_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_sign;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__oldMax_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__oldMax_sign;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__exp2_counter_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__exp2_counter_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__newMax_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__newMax_sign;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__oldMax_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_9__DOT__oldMax_sign;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__424(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__424\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:701: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 701, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:703: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 703, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__425(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__425\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_3)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:707: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 707, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:709: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 709, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_5)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:713: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 713, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:715: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 715, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__426(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__426\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:719: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 719, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:721: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 721, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_9)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:725: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 725, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:727: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 727, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__427(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__427\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:731: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 731, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:733: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 733, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_13)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:737: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 737, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:739: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 739, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__428(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__428\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:743: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 743, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:745: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 745, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_17)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:749: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 749, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:751: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 751, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__429(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__429\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:755: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 755, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:757: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 757, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_21)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:761: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 761, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:763: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 763, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__430(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__430\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:767: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 767, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:769: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 769, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:773: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 773, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:775: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 775, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__431(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__431\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_27)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:779: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 779, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:781: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 781, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_29)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:785: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 785, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:787: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 787, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__432(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__432\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_31)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:791: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 791, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:793: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 793, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_33)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:797: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 797, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:799: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 799, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__433(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__433\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_35)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:803: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 803, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:805: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 805, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_37)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:809: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 809, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:811: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 811, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__434(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__434\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:815: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 815, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:817: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 817, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__REG_41)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixEngineController.sv:821: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 821, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixEngineController.sv:823: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixEngineController.sv", 823, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__436(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__436\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumFlags_3 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumFlags_3;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumFlags_3 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumFlags_3;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumFlags_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumFlags_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumFlags_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumFlags_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumTimer 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__accumTimer;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumTimer 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__accumTimer;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__REG_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixControlFSM.sv:627: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_0: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 627, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixControlFSM.sv:629: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__437(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__437\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_0__DOT__REG_3)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixControlFSM.sv:633: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_0: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 633, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixControlFSM.sv:635: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 635, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__REG_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixControlFSM.sv:627: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_1: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 627, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixControlFSM.sv:629: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_1\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__438(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__438\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT__fsm_list_1__DOT__REG_3)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MatrixControlFSM.sv:633: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_1: Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 633, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MatrixControlFSM.sv:635: Assertion failed in %NTestDriver.testHarness.chiptop0.system.domain.fsa.fsa.mxControl.fsm_list_1\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/MatrixControlFSM.sv", 635, "");
        }
    }
}

void VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(QData/*63:0*/ &axi_tracker_init__Vfuncrtn);
void VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(QData/*63:0*/ aw_info_ptr, CData/*0:0*/ aw_fire, IData/*31:0*/ aw_addr, CData/*7:0*/ aw_size, CData/*7:0*/ aw_len, CData/*0:0*/ w_fire, const VlUnpacked<CData/*7:0*/, 8> &w_data, CData/*0:0*/ w_last);

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__477(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__477\n"); );
    // Init
    QData/*63:0*/ __Vfunc_axi_tracker_init__30__Vfuncout;
    __Vfunc_axi_tracker_init__30__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__30__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__30__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_7_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_hd3885300__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_7__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__wBeatCnt)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__478(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__478\n"); );
    // Init
    QData/*63:0*/ __Vfunc_axi_tracker_init__22__Vfuncout;
    __Vfunc_axi_tracker_init__22__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_axi_tracker_init__26__Vfuncout;
    __Vfunc_axi_tracker_init__26__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__26__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__26__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_6_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_haf9473cb__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_6__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__wBeatCnt)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__22__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__22__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_5_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_hfd5a58c8__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_5__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__wBeatCnt)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__479(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__479\n"); );
    // Init
    QData/*63:0*/ __Vfunc_axi_tracker_init__14__Vfuncout;
    __Vfunc_axi_tracker_init__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_axi_tracker_init__18__Vfuncout;
    __Vfunc_axi_tracker_init__18__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__18__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__18__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_4_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_h70df2d2a__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_4__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__wBeatCnt)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__14__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__14__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_3_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_h06296d0b__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_3__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__wBeatCnt)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__480(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__480\n"); );
    // Init
    QData/*63:0*/ __Vfunc_axi_tracker_init__6__Vfuncout;
    __Vfunc_axi_tracker_init__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_axi_tracker_init__10__Vfuncout;
    __Vfunc_axi_tracker_init__10__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__10__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__10__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_2_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_h5f90eaf7__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_2__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__wBeatCnt)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__6__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__6__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT__initialized = 1U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__481(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__481\n"); );
    // Init
    QData/*63:0*/ __Vfunc_axi_tracker_init__2__Vfuncout;
    __Vfunc_axi_tracker_init__2__Vfuncout = 0;
    // Body
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_1_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_hb9984bf6__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker_1__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__wBeatCnt)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT__initialized)))) {
        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(__Vfunc_axi_tracker_init__2__Vfuncout);
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT__aw_info_ptr 
            = __Vfunc_axi_tracker_init__2__Vfuncout;
        vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT__initialized = 1U;
    }
    VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT__aw_info_ptr, 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_valid) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg)), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_0_bits_aw_bits_addr, 3U, (IData)(vlSelf->__VdfgTmp_h336b5e92__0), vlSelf->TestDriver__DOT__testHarness__DOT____Vcellinp__axiTracker__w_fire, vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__wBeatCnt)));
}

void VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(IData/*31:0*/ chip_id, QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ mem_base, IData/*31:0*/ addr_bits, QData/*63:0*/ &memory_init__Vfuncrtn);
void VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, QData/*63:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, QData/*63:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, const VlUnpacked<CData/*7:0*/, 8> &w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, VlUnpacked<CData/*7:0*/, 8> &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp);

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__975(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__975\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__28__Vfuncout;
    __Vfunc_memory_init__28__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__ar_ready;
    __Vtask_memory_tick__Vdpioc2__29__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__aw_ready;
    __Vtask_memory_tick__Vdpioc2__29__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__w_ready;
    __Vtask_memory_tick__Vdpioc2__29__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__r_valid;
    __Vtask_memory_tick__Vdpioc2__29__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__29__r_id;
    __Vtask_memory_tick__Vdpioc2__29__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__29__r_resp;
    __Vtask_memory_tick__Vdpioc2__29__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__29__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__29__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__r_last;
    __Vtask_memory_tick__Vdpioc2__29__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__29__b_valid;
    __Vtask_memory_tick__Vdpioc2__29__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__29__b_id;
    __Vtask_memory_tick__Vdpioc2__29__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__29__b_resp;
    __Vtask_memory_tick__Vdpioc2__29__b_resp = 0;
    VlWide<5>/*159:0*/ __Vtemp_10;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__28__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT__channel 
                = __Vfunc_memory_init__28__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT__initialized = 1U;
        }
        __Vtemp_10[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_size)))))))));
        __Vtemp_10[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_10[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_10[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_10[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__29__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_7_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_10[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_10[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__29__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_7_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_hd3885300__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__29__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__29__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_7_ready), __Vtask_memory_tick__Vdpioc2__29__r_id, __Vtask_memory_tick__Vdpioc2__29__r_resp, __Vtask_memory_tick__Vdpioc2__29__r_data, __Vtask_memory_tick__Vdpioc2__29__r_last, __Vtask_memory_tick__Vdpioc2__29__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__29__b_id, __Vtask_memory_tick__Vdpioc2__29__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__29__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__29__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__29__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__29__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__29__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__29__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__29__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__29__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__29__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__29__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__979(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__979\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__24__Vfuncout;
    __Vfunc_memory_init__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__ar_ready;
    __Vtask_memory_tick__Vdpioc2__25__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__aw_ready;
    __Vtask_memory_tick__Vdpioc2__25__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__w_ready;
    __Vtask_memory_tick__Vdpioc2__25__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__r_valid;
    __Vtask_memory_tick__Vdpioc2__25__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__25__r_id;
    __Vtask_memory_tick__Vdpioc2__25__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__25__r_resp;
    __Vtask_memory_tick__Vdpioc2__25__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__25__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__25__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__r_last;
    __Vtask_memory_tick__Vdpioc2__25__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__25__b_valid;
    __Vtask_memory_tick__Vdpioc2__25__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__25__b_id;
    __Vtask_memory_tick__Vdpioc2__25__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__25__b_resp;
    __Vtask_memory_tick__Vdpioc2__25__b_resp = 0;
    VlWide<5>/*159:0*/ __Vtemp_10;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__24__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT__channel 
                = __Vfunc_memory_init__24__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT__initialized = 1U;
        }
        __Vtemp_10[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_size)))))))));
        __Vtemp_10[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_10[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_10[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_10[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__25__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_6_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_10[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_10[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__25__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_6_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_haf9473cb__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__25__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__25__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_6_ready), __Vtask_memory_tick__Vdpioc2__25__r_id, __Vtask_memory_tick__Vdpioc2__25__r_resp, __Vtask_memory_tick__Vdpioc2__25__r_data, __Vtask_memory_tick__Vdpioc2__25__r_last, __Vtask_memory_tick__Vdpioc2__25__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__25__b_id, __Vtask_memory_tick__Vdpioc2__25__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__25__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__25__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__25__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__25__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__25__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__25__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__25__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__25__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__25__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__25__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__983(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__983\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__20__Vfuncout;
    __Vfunc_memory_init__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__ar_ready;
    __Vtask_memory_tick__Vdpioc2__21__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__aw_ready;
    __Vtask_memory_tick__Vdpioc2__21__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__w_ready;
    __Vtask_memory_tick__Vdpioc2__21__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__r_valid;
    __Vtask_memory_tick__Vdpioc2__21__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__21__r_id;
    __Vtask_memory_tick__Vdpioc2__21__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__21__r_resp;
    __Vtask_memory_tick__Vdpioc2__21__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__21__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__21__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__r_last;
    __Vtask_memory_tick__Vdpioc2__21__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__21__b_valid;
    __Vtask_memory_tick__Vdpioc2__21__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__21__b_id;
    __Vtask_memory_tick__Vdpioc2__21__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__21__b_resp;
    __Vtask_memory_tick__Vdpioc2__21__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_5_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__20__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT__channel 
                = __Vfunc_memory_init__20__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__21__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_5_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__21__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_5_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_hfd5a58c8__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__21__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__21__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_5_ready), __Vtask_memory_tick__Vdpioc2__21__r_id, __Vtask_memory_tick__Vdpioc2__21__r_resp, __Vtask_memory_tick__Vdpioc2__21__r_data, __Vtask_memory_tick__Vdpioc2__21__r_last, __Vtask_memory_tick__Vdpioc2__21__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__21__b_id, __Vtask_memory_tick__Vdpioc2__21__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__21__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__21__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__21__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__21__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__21__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__21__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__21__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__21__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__21__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__21__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__988(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__988\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__16__Vfuncout;
    __Vfunc_memory_init__16__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__ar_ready;
    __Vtask_memory_tick__Vdpioc2__17__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__aw_ready;
    __Vtask_memory_tick__Vdpioc2__17__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__w_ready;
    __Vtask_memory_tick__Vdpioc2__17__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__r_valid;
    __Vtask_memory_tick__Vdpioc2__17__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__17__r_id;
    __Vtask_memory_tick__Vdpioc2__17__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__17__r_resp;
    __Vtask_memory_tick__Vdpioc2__17__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__17__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__17__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__r_last;
    __Vtask_memory_tick__Vdpioc2__17__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__17__b_valid;
    __Vtask_memory_tick__Vdpioc2__17__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__17__b_id;
    __Vtask_memory_tick__Vdpioc2__17__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__17__b_resp;
    __Vtask_memory_tick__Vdpioc2__17__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_4_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__16__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT__channel 
                = __Vfunc_memory_init__16__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__17__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_4_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__17__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_4_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_h70df2d2a__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__17__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__17__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_4_ready), __Vtask_memory_tick__Vdpioc2__17__r_id, __Vtask_memory_tick__Vdpioc2__17__r_resp, __Vtask_memory_tick__Vdpioc2__17__r_data, __Vtask_memory_tick__Vdpioc2__17__r_last, __Vtask_memory_tick__Vdpioc2__17__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__17__b_id, __Vtask_memory_tick__Vdpioc2__17__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__17__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__17__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__17__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__17__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__17__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__17__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__17__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__17__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__17__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__17__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__990(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__990\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__12__Vfuncout;
    __Vfunc_memory_init__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__ar_ready;
    __Vtask_memory_tick__Vdpioc2__13__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__aw_ready;
    __Vtask_memory_tick__Vdpioc2__13__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__w_ready;
    __Vtask_memory_tick__Vdpioc2__13__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__r_valid;
    __Vtask_memory_tick__Vdpioc2__13__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__13__r_id;
    __Vtask_memory_tick__Vdpioc2__13__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__13__r_resp;
    __Vtask_memory_tick__Vdpioc2__13__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__13__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__13__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__r_last;
    __Vtask_memory_tick__Vdpioc2__13__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__13__b_valid;
    __Vtask_memory_tick__Vdpioc2__13__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__13__b_id;
    __Vtask_memory_tick__Vdpioc2__13__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__13__b_resp;
    __Vtask_memory_tick__Vdpioc2__13__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_3_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__12__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT__channel 
                = __Vfunc_memory_init__12__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__13__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_3_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__13__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_3_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_h06296d0b__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__13__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__13__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_3_ready), __Vtask_memory_tick__Vdpioc2__13__r_id, __Vtask_memory_tick__Vdpioc2__13__r_resp, __Vtask_memory_tick__Vdpioc2__13__r_data, __Vtask_memory_tick__Vdpioc2__13__r_last, __Vtask_memory_tick__Vdpioc2__13__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__13__b_id, __Vtask_memory_tick__Vdpioc2__13__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__13__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__13__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__13__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__13__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__13__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__13__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__13__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__13__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__13__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__13__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__992(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__992\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__8__Vfuncout;
    __Vfunc_memory_init__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__ar_ready;
    __Vtask_memory_tick__Vdpioc2__9__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__aw_ready;
    __Vtask_memory_tick__Vdpioc2__9__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__w_ready;
    __Vtask_memory_tick__Vdpioc2__9__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__r_valid;
    __Vtask_memory_tick__Vdpioc2__9__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__9__r_id;
    __Vtask_memory_tick__Vdpioc2__9__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__9__r_resp;
    __Vtask_memory_tick__Vdpioc2__9__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__9__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__9__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__r_last;
    __Vtask_memory_tick__Vdpioc2__9__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__9__b_valid;
    __Vtask_memory_tick__Vdpioc2__9__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__9__b_id;
    __Vtask_memory_tick__Vdpioc2__9__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__9__b_resp;
    __Vtask_memory_tick__Vdpioc2__9__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_2_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__8__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT__channel 
                = __Vfunc_memory_init__8__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__9__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_2_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__9__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_2_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_h5f90eaf7__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__9__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__9__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_2_ready), __Vtask_memory_tick__Vdpioc2__9__r_id, __Vtask_memory_tick__Vdpioc2__9__r_resp, __Vtask_memory_tick__Vdpioc2__9__r_data, __Vtask_memory_tick__Vdpioc2__9__r_last, __Vtask_memory_tick__Vdpioc2__9__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__9__b_id, __Vtask_memory_tick__Vdpioc2__9__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__9__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__9__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__9__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__9__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__9__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__9__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__9__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__9__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__9__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__9__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__994(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__994\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__4__Vfuncout;
    __Vfunc_memory_init__4__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__ar_ready;
    __Vtask_memory_tick__Vdpioc2__5__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__aw_ready;
    __Vtask_memory_tick__Vdpioc2__5__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__w_ready;
    __Vtask_memory_tick__Vdpioc2__5__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__r_valid;
    __Vtask_memory_tick__Vdpioc2__5__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__5__r_id;
    __Vtask_memory_tick__Vdpioc2__5__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__5__r_resp;
    __Vtask_memory_tick__Vdpioc2__5__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__5__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__5__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__r_last;
    __Vtask_memory_tick__Vdpioc2__5__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__5__b_valid;
    __Vtask_memory_tick__Vdpioc2__5__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__5__b_id;
    __Vtask_memory_tick__Vdpioc2__5__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__5__b_resp;
    __Vtask_memory_tick__Vdpioc2__5__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_1_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__4__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT__channel 
                = __Vfunc_memory_init__4__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__5__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_1_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__5__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_1_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_hb9984bf6__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__5__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__5__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___fsa_io_spad_write_1_ready), __Vtask_memory_tick__Vdpioc2__5__r_id, __Vtask_memory_tick__Vdpioc2__5__r_resp, __Vtask_memory_tick__Vdpioc2__5__r_data, __Vtask_memory_tick__Vdpioc2__5__r_last, __Vtask_memory_tick__Vdpioc2__5__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__5__b_id, __Vtask_memory_tick__Vdpioc2__5__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__5__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__5__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__5__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__5__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__5__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__5__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__5__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__5__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__5__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__5__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT_____05Fb_resp);
    }
}
