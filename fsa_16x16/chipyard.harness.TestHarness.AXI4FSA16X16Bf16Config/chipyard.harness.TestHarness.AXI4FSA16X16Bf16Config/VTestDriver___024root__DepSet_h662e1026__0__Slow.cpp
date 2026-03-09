// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__0(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__0\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__dump_start;
    TestDriver__DOT__dump_start = 0;
    IData/*31:0*/ TestDriver__DOT__rand_value;
    TestDriver__DOT__rand_value = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x61782d63U;
    __Vtemp_1[3U] = 0x6dU;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_1), 
                               vlSelf->TestDriver__DOT__max_cycles);
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x73746172U;
    __Vtemp_2[2U] = 0x756d702dU;
    __Vtemp_2[3U] = 0x64U;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_2), 
                               TestDriver__DOT__dump_start);
    vlSelf->TestDriver__DOT__verbose = (1U & VL_TESTPLUSARGS_I(
                                                               std::string{"verbose"}));
    TestDriver__DOT__rand_value = VL_RANDOM_I();
    TestDriver__DOT__rand_value = VL_RANDOM_SEEDED_II(TestDriver__DOT__rand_value);
    if (VL_UNLIKELY(vlSelf->TestDriver__DOT__verbose)) {
        VL_FWRITEF_NX(0x80000002U,"testing $random %0x\n",0,
                      32,TestDriver__DOT__rand_value);
    }
    __Vtemp_3[0U] = 0x696c653dU;
    __Vtemp_3[1U] = 0x6c757366U;
    __Vtemp_3[2U] = 0x76636470U;
    __Vtemp_4[0U] = 0x696c653dU;
    __Vtemp_4[1U] = 0x73646266U;
    __Vtemp_4[2U] = 0x66U;
    if (VL_UNLIKELY(((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_3)) 
                      || VL_TESTPLUSARGS_I(std::string{"vcdfile="})) 
                     || VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_4))))) {
        VL_FWRITEF_NX(0x80000002U,"Error: +vcdfile, +vcdplusfile, or +fsdbfile requested but compile did not have +define+DEBUG enabled\n",0);
        VL_WRITEF_NX("[%0t] %%Fatal: TestDriver.v:98: Assertion failed in %NTestDriver\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TestDriver.v", 98, "");
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__count 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__corrupt_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__anonOut_a_bits_data_rdata_written_once 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__anonOut_a_bits_data_rdata_0 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
            [0U]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                     [1U]));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestDriver___024root___dump_triggers__stl(VTestDriver___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestDriver___024root___eval_triggers__stl(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestDriver___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
