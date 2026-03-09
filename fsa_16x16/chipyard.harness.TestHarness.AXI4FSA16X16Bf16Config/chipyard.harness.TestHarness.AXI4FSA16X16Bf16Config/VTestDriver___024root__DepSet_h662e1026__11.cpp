// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4657(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4657\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0U == (0x180U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:196: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 196, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 198, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 202, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 204, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4658(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4658\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 208, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 210, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0xfU != (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 3U) | 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x1dU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 214, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 216, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4659(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4659\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 220, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 222, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xa000000U == 
                                       (0xe000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 226, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 228, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4660(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4660\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:232: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 232, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 234, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:238: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 238, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 240, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4661(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4661\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0U == (0x180U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 244, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 246, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:250: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 250, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 252, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4662(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4662\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:256: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 256, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 258, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (~ (IData)((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:262: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 262, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 264, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4663(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4663\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0xfU != (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 3U) | 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x1dU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 268, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 270, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 274, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 276, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4664(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4664\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 282, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(((0xa000000U == (0xe000000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                   & (7U != (7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4665(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4665\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 294, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4666(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4666\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 306, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 310, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 312, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4667(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4667\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 316, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 318, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xa000000U == 
                                       (0xe000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 322, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 324, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4668(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4668\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 328, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 330, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 334, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 336, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4669(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4669\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 342, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4670(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4670\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d39ab4__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xa000000U == 
                                       (0xe000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:352: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 354, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d39ab4__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:358: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4671(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4671\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d39ab4__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:364: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 366, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d39ab4__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:370: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4672(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4672\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d39ab4__0)) 
                     & (0U != (0xfU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 3U) | (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1dU)) 
                                       & (~ (((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x180U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                       | ((0x4040U 
                                                           == 
                                                           (0x4040U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                          | (0x6000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                              << 3U) 
                                             | (((IData)(
                                                         ((0U 
                                                           != 
                                                           (0x180U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                          | ((0x4040U 
                                                              == 
                                                              (0x4040U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | (0x4000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0x2000U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x180U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                              | ((0x40U 
                                                                  == 
                                                                  (0x4040U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                 | (0U 
                                                                    == 
                                                                    (0x6000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 378, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4673(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4673\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78dfdee9__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)((0xa000000U == 
                                      (0xe000100U & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 384, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78dfdee9__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 390, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4674(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4674\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78dfdee9__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 396, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78dfdee9__0)) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 402, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4675(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4675\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78dfdee9__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 408, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4676(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4676\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7af84b11__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)((0xa000000U == 
                                      (0xe000100U & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 414, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7af84b11__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 420, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4677(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4677\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7af84b11__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 426, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7af84b11__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 5U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4678(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4678\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7af84b11__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 438, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4679(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4679\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xa000000U == 
                                       (0xe000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 444, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:448: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 448, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 450, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4680(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4680\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:454: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 454, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 456, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:460: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 460, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 462, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4681(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4681\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:466: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 466, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 468, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4682(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4682\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h3796c4bb__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:472: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 472, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 474, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
                     & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:478: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 478, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 480, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4683(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4683\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:484: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 484, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 486, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0ULL == (0xc0ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:490: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 490, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 492, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4684(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4684\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:496: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 496, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 498, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0x2fU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 504, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4685(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4685\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                >> 0xeU))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 510, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 516, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4686(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4686\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (4ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 522, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1cULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 528, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4687(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4687\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x14ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 534, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x800000000004ULL == (0x800000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 540, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4688(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4688\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4004ULL == (0x4007ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel Grant is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 546, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 552, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4689(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4689\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (5ULL == (0xc7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 558, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1dULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 564, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4690(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4690\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x15ULL == (0x1fULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 570, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0x4000ULL != (0x800000004000ULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 576, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4691(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4691\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4005ULL == (0x4007ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel GrantData is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 582, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 588, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4692(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4692\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 594, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x800000000000ULL == (0x800000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 600, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4693(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4693\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4000ULL == (0x4007ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 606, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 612, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4694(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4694\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 618, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0x4000ULL != (0x800000004000ULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 624, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4695(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4695\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4001ULL == (0x4007ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 630, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                 >> 0xaU)))) 
                           | ((1U == (3U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xaU)))) 
                              | ((2U == (3U & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))) 
                                 | (3U == (3U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 0xaU))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 636, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4696(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4696\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 642, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x800000000002ULL == (0x800000000007ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 648, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4697(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4697\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4002ULL == (0x4007ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel HintAck is denied (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 654, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4698(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4698\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__param))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 666, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 672, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4699(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4699\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__source))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 678, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xdU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4700(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4700\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:688: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:690: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 690, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 3U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:694: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:696: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 696, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4701(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4701\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:700: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:702: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 702, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                         >> 8U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:706: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:708: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 708, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4702(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4702\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 0xcU))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__sink))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:712: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:714: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 714, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 0xeU))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:718: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:720: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 720, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4703(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4703\n"); );
    // Body
    if (VL_UNLIKELY((0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1) 
                                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                                   >> (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 9U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:724: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 724, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:726: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 726, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                                       >> (0xfU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                           >> 8U))))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:730: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 730, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:732: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 732, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4704(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4704\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:736: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 736, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:738: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 738, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4705(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4705\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (7U & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 5U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:742: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 742, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:744: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 744, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                                                              >> 
                                                              (0x3cU 
                                                               & ((IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                           >> 8U)) 
                                                                  << 2U))) 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                                                              >> 
                                                              (0x3cU 
                                                               & ((IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                           >> 8U)) 
                                                                  << 2U))) 
                                                             >> 1U)))))))
                                 : 0U)) | ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                                                                 >> 
                                                                 (0x3cU 
                                                                  & ((IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                              >> 8U)) 
                                                                     << 2U))) 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                                                                       >> 
                                                                       (0x3cU 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                                >> 8U)) 
                                                                           << 2U))) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:748: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 748, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:750: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 750, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4706(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4706\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != 
                        (7U & (IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                                        >> (0x3cU & 
                                            ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                      >> 8U)) 
                                             << 2U))) 
                                       >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:754: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 754, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:756: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 756, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_0_a_valid)) 
                        & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)) == (0xfU 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                           >> 8U))))) 
                       & (6U != (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_port_named_serial_tl_0_in_auto_tl_out_d_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft))
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__readys_readys)
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__state_0)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_a_ready)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:760: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 760, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:762: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 762, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4707(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4707\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0xffffU & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))))
                                    : 0U) != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_37)
                                               ? (0xffffU 
                                                  & VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                              >> 8U)))))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (0xffffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))))
                                            : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:766: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 766, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:768: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 768, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:772: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 772, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:774: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 774, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4708(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4708\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ (0xffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1) 
                                      >> (0xfU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                          >> 8U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:778: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 778, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:780: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 780, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                       >> 5U))) != 
                        (7U & (IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
                                        >> (0x3cU & 
                                            ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                      >> 8U)) 
                                             << 2U))) 
                                       >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:784: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 784, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:786: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 786, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4709(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4709\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_2.sv:790: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:65:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 790, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_2.sv:792: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_2.sv", 792, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:176: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 176, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:178: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 178, "");
        }
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 180, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 182, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4710(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4710\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 186, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 188, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0U == (0x180U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 194, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4711(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4711\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 200, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 204, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 206, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4712(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4712\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (0xfU != (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 3U) | 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x1dU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 210, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 212, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78b1804a__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 216, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 218, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4713(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4713\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 222, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 224, "");
        }
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 226, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 228, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4714(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4714\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:232: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 232, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 234, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0U == (0x180U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:238: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 238, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 240, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4715(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4715\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 244, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 246, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:250: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 250, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 252, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4716(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4716\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (~ (IData)((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:256: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 256, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 258, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (0xfU != (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 3U) | 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x1dU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:262: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 262, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 264, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4717(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4717\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h6ad6b3ed__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 268, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 270, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 274, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 276, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4718(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4718\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(((0x10000000U == 
                                    (0x1fe00000U & 
                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                   & (7U != (7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 282, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4719(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4719\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 294, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4720(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4720\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 306, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4721(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4721\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h378ba13d__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                        >> 1U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 310, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 312, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0x10000000U 
                                       == (0x1fe00000U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 316, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 318, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4722(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4722\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 322, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 324, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x13U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 328, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 330, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4723(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4723\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 334, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 336, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_out_1_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h78d7fa93__0)) 
                     & ((0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x1dU))) 
                        != (((IData)(((0U != (0x180U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                      | ((0x4040U == 
                                          (0x4040U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                         | (0x6000U 
                                            == (0x6000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                             << 3U) | (((IData)(((0U 
                                                  != 
                                                  (0x180U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                 | ((0x4040U 
                                                     == 
                                                     (0x4040U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                    | (0x4000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                        << 2U) | (((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x180U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | ((0x40U 
                                                                == 
                                                                (0x4040U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x2000U 
                                                                  == 
                                                                  (0x6000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x180U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                             | ((0x40U 
                                                                 == 
                                                                 (0x4040U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                | (0U 
                                                                   == 
                                                                   (0x6000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_4.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/fsa/src/main/scala/fsa/Configs.scala:82:84)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_4.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.fbus.coupler_to_fsa.asource.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_4.sv", 342, "");
        }
    }
}
