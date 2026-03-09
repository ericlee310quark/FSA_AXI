// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__69(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__69\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__d_first_counter_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0x242U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__watchdog_1 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x242U]) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                         [0x243U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__61(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__62(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__63(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__64(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__65(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__66(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__67(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__68(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__70(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__70\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__61(vlSelf);
    VTestDriver___024root___eval_initial__TOP__62(vlSelf);
    VTestDriver___024root___eval_initial__TOP__63(vlSelf);
    VTestDriver___024root___eval_initial__TOP__64(vlSelf);
    VTestDriver___024root___eval_initial__TOP__65(vlSelf);
    VTestDriver___024root___eval_initial__TOP__66(vlSelf);
    VTestDriver___024root___eval_initial__TOP__67(vlSelf);
    VTestDriver___024root___eval_initial__TOP__68(vlSelf);
    VTestDriver___024root___eval_initial__TOP__69(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT__Memory[0U] 
        = (0x7fffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT__Memory[1U] 
        = (0x7fffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__acknum 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__71(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__71\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__dOrig 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__dToggle 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__gennum 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__aToggle_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__72(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__72\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__70(vlSelf);
    VTestDriver___024root___eval_initial__TOP__71(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__73(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__73\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x11U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x12U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x13U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x14U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x15U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x16U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x17U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__74(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__74\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x18U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x19U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1aU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1bU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1cU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1dU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1eU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x1fU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x20U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x21U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x22U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x23U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__75(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__75\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x24U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x25U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x26U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0x27U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__source 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                    [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__address 
        = ((0x7ffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x11U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__76(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__76\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__source_1 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                    [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [1U] >> 0x14U))) << 0x34U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [2U])) << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                                   [3U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xaU] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [9U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [9U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [8U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [8U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [7U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [7U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [6U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [6U] >> 0xcU) | ((IData)((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                       [4U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                                   [5U])))) 
                             << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                      [4U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                       [5U])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                         [4U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                          [5U]))) >> 0x20U)) 
              << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [3U]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                [4U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                            [5U]))) 
                              >> 0x20U)) >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__77(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__77\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x12U] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                 [0x13U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x12U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                [0x11U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                [0x10U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                [0xfU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [0xeU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0xcU) | ((IData)((((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                         [0xcU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                          [0xdU])))) 
                               << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                      [0xcU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                       [0xdU])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                         [0xcU])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                          [0xdU]))) 
                       >> 0x20U)) << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xbU]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                  [0xcU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                              [0xdU]))) 
                                >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__watchdog 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x13U]) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                        [0x14U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [0x14U] >> 0x1aU))) << 0x3aU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [0x15U])) << 0x1aU) 
              | (QData)((IData)((0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                 [0x16U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__78(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__78\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x25U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                 [0x26U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x25U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                              [0x24U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x24U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                              [0x23U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x23U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                              [0x22U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x22U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                              [0x21U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x21U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                                    [0x20U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                      [0x1fU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                       [0x20U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                 [0x1fU])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                             [0x20U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0x1eU]) | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                   [0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                               [0x20U]))) 
                                 >> 0x20U)) >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
           [0x26U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___RANDOM
        [0x27U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__79(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__79\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__72(vlSelf);
    VTestDriver___024root___eval_initial__TOP__73(vlSelf);
    VTestDriver___024root___eval_initial__TOP__74(vlSelf);
    VTestDriver___024root___eval_initial__TOP__75(vlSelf);
    VTestDriver___024root___eval_initial__TOP__76(vlSelf);
    VTestDriver___024root___eval_initial__TOP__77(vlSelf);
    VTestDriver___024root___eval_initial__TOP__78(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_source 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                    [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                      [0U] >> 0x10U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__80(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__80\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
        = ((0x80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                     [0U] >> 0x18U)) | (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                                        [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [3U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__81(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__81\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__79(vlSelf);
    VTestDriver___024root___eval_initial__TOP__80(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__82(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__82\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x11U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x12U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x13U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x14U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x15U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x16U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x17U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__83(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__83\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x18U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x19U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1aU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1bU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1cU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1dU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1eU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x1fU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x20U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x21U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x22U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x23U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__84(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__84\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x24U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x25U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x26U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM[0x27U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__source 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                    [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__address 
        = ((0x7ffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x11U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__85(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__85\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__source_1 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                    [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [1U] >> 0x14U))) << 0x34U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [2U])) << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                   [3U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__86(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__86\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xaU] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [9U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [9U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [8U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [8U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [7U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [7U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [6U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [6U] >> 0xcU) | ((IData)((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                       [4U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                   [5U])))) 
                             << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [4U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [5U])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                         [4U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [5U]))) >> 0x20U)) 
              << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [3U]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                [4U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                            [5U]))) 
                              >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x12U] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0x13U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x12U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0x11U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0x10U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xfU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [0xeU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0xcU) | ((IData)((((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                         [0xcU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                          [0xdU])))) 
                               << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [0xcU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [0xdU])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                         [0xcU])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [0xdU]))) 
                       >> 0x20U)) << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xbU]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                  [0xcU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                              [0xdU]))) 
                                >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x14U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__87(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__87\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x13U]) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                        [0x14U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [0x14U] >> 0x1aU))) << 0x3aU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [0x15U])) << 0x1aU) 
              | (QData)((IData)((0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0x16U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x25U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0x26U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x25U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x24U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x24U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x23U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x23U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x22U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x22U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x21U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x21U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                    [0x20U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [0x1fU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [0x20U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                 [0x1fU])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                             [0x20U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x1eU]) | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                   [0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                               [0x20U]))) 
                                 >> 0x20U)) >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0x26U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x27U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__88(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__88\n"); );
    // Init
    VlWide<4>/*127:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    VL_ZERO_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__81(vlSelf);
    VTestDriver___024root___eval_initial__TOP__82(vlSelf);
    VTestDriver___024root___eval_initial__TOP__83(vlSelf);
    VTestDriver___024root___eval_initial__TOP__84(vlSelf);
    VTestDriver___024root___eval_initial__TOP__85(vlSelf);
    VTestDriver___024root___eval_initial__TOP__86(vlSelf);
    VTestDriver___024root___eval_initial__TOP__87(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][3U] 
        = (0x7fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][3U] 
        = (0x7fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__89(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__89\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__90(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__90\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__88(vlSelf);
    VTestDriver___024root___eval_initial__TOP__89(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___RANDOM
                 [0U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__91(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__91\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__92(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__92\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__90(vlSelf);
    VTestDriver___024root___eval_initial__TOP__91(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__93(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__93\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__94(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__94\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__92(vlSelf);
    VTestDriver___024root___eval_initial__TOP__93(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                       [1U])))) << 2U) 
           | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
              [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                       [1U])))) >> 0x1eU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                         [0U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                          [1U]))) >> 0x20U)) 
              << 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                       [1U]))) >> 0x20U)) 
           >> 0x1eU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__95(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__95\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__96(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__96\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__94(vlSelf);
    VTestDriver___024root___eval_initial__TOP__95(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__97(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__97\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__98(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__98\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__96(vlSelf);
    VTestDriver___024root___eval_initial__TOP__97(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__99(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__99\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_opcode 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_data 
        = ((0xffffc000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [0U]) | (0x3fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [1U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [1U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [1U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [1U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [1U] >> 0x1cU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__100(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__100\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_data 
        = ((0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [1U]) | (0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [2U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_opcode 
        = ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                  [2U] >> 0x1dU)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                                     [3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [3U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [3U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [3U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_data 
        = ((0xfffff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [3U]) | (0xfffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [4U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [4U] >> 0xdU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__101(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__101\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [4U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [4U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [4U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_data 
        = ((0xf8000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [4U]) | (0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [5U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [5U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [5U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [6U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [6U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [6U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_data 
        = ((0xfffffc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [6U]) | (0x3ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [7U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__102(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__102\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [7U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [7U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [7U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [7U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [7U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_data 
        = ((0xfe000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [7U]) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [8U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [8U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [8U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_size 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                  [8U] >> 0x1dU)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                                     [9U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [9U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__103(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__103\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [9U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_data 
        = ((0xffffff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [9U]) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                     [0xaU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xaU] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xaU] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xaU] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [0xaU] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xaU] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_data 
        = ((0xff800000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
            [0xaU]) | (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                       [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xbU] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__widx_widx_bin 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                   [0xbU] >> 0x18U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__104(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__104\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                 [0xbU] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__widx_gray 
        = ((0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                    [0xbU] >> 0x1cU)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___RANDOM
                                         [0xcU]));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__105(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__105\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__98(vlSelf);
    VTestDriver___024root___eval_initial__TOP__99(vlSelf);
    VTestDriver___024root___eval_initial__TOP__100(vlSelf);
    VTestDriver___024root___eval_initial__TOP__101(vlSelf);
    VTestDriver___024root___eval_initial__TOP__102(vlSelf);
    VTestDriver___024root___eval_initial__TOP__103(vlSelf);
    VTestDriver___024root___eval_initial__TOP__104(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__106(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__106\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__107(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__107\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__105(vlSelf);
    VTestDriver___024root___eval_initial__TOP__106(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__108(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__108\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__109(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__109\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__107(vlSelf);
    VTestDriver___024root___eval_initial__TOP__108(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__110(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__110\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__r_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH_r 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                   [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__beatsLeft 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__beatsLeft_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [0U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__a_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___RANDOM
                 [1U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__111(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__111\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__109(vlSelf);
    VTestDriver___024root___eval_initial__TOP__110(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__112(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__112\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____Vlvbound_h370043f4__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                      [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                  [0U] >> 0x1dU)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                                     [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__113(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__113\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                             [2U] >> 1U))) << 0x21U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                               [3U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                             [4U] >> 1U))) << 0x21U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                               [5U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [6U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [6U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__114(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__114\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__watchdog 
        = ((0xffffff80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
            [6U]) | (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                      [7U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x17U))) << 0x37U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x17U) | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_2 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                 [0xbU] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__watchdog_1 
        = ((0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
            [0xbU]) | (0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___RANDOM
                       [0xcU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__115(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__115\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__111(vlSelf);
    VTestDriver___024root___eval_initial__TOP__112(vlSelf);
    VTestDriver___024root___eval_initial__TOP__113(vlSelf);
    VTestDriver___024root___eval_initial__TOP__114(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__got_e 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__sent_d 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                   [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___RANDOM
                      [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__116(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__116\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__117(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__117\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__115(vlSelf);
    VTestDriver___024root___eval_initial__TOP__116(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__118(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__118\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__119(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__119\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__120(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__120\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__117(vlSelf);
    VTestDriver___024root___eval_initial__TOP__118(vlSelf);
    VTestDriver___024root___eval_initial__TOP__119(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__got_e 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__sent_d 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                   [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___RANDOM
                      [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__121(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__121\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__122(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__122\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__123(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__123\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__124(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__124\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__120(vlSelf);
    VTestDriver___024root___eval_initial__TOP__121(vlSelf);
    VTestDriver___024root___eval_initial__TOP__122(vlSelf);
    VTestDriver___024root___eval_initial__TOP__123(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__got_e 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__sent_d 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                   [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___RANDOM
                      [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__125(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__125\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__126(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__126\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__127(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__127\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__128(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__128\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__124(vlSelf);
    VTestDriver___024root___eval_initial__TOP__125(vlSelf);
    VTestDriver___024root___eval_initial__TOP__126(vlSelf);
    VTestDriver___024root___eval_initial__TOP__127(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__got_e 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                   [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__address 
        = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___RANDOM
                      [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__129(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__129\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__130(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__130\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[2U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[3U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[4U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__131(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__131\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[5U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[6U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT__Memory[7U][2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__132(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__132\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__128(vlSelf);
    VTestDriver___024root___eval_initial__TOP__129(vlSelf);
    VTestDriver___024root___eval_initial__TOP__130(vlSelf);
    VTestDriver___024root___eval_initial__TOP__131(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__133(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__133\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x11U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x12U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x13U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x14U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x15U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x16U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__134(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__134\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x17U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x18U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x19U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1aU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1bU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1cU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1dU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1eU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x1fU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x20U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x21U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x22U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__135(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__135\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x23U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x24U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x25U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x26U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM[0x27U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__source 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                    [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__address 
        = ((0x7ffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x11U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 1U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__136(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__136\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__source_1 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                    [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                             [1U] >> 0x14U))) << 0x34U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                               [2U])) << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                                   [3U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__137(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__137\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0xaU] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                               [9U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [9U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                             [8U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [8U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                             [7U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [7U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                             [6U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [6U] >> 0xcU) | ((IData)((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                       [4U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                                   [5U])))) 
                             << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                      [4U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                       [5U])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                         [4U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                          [5U]))) >> 0x20U)) 
              << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [3U]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                [4U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                            [5U]))) 
                              >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x12U] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                 [0x13U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x12U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                [0x11U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                [0x10U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                [0xfU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                               [0xeU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0xcU) | ((IData)((((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                         [0xcU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                          [0xdU])))) 
                               << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                      [0xcU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                       [0xdU])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                         [0xcU])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                          [0xdU]))) 
                       >> 0x20U)) << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0xbU]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                  [0xcU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                              [0xdU]))) 
                                >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x14U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__138(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__138\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x13U]) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                        [0x14U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                             [0x14U] >> 0x1aU))) << 0x3aU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                               [0x15U])) << 0x1aU) 
              | (QData)((IData)((0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                 [0x16U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x25U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                 [0x26U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x25U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                              [0x24U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x24U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                              [0x23U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x23U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                              [0x22U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x22U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                              [0x21U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x21U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                                    [0x20U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                      [0x1fU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                       [0x20U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                 [0x1fU])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                             [0x20U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
            [0x1eU]) | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                   [0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
                                                               [0x20U]))) 
                                 >> 0x20U)) >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
           [0x26U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___RANDOM
        [0x27U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__139(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__139\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__132(vlSelf);
    VTestDriver___024root___eval_initial__TOP__133(vlSelf);
    VTestDriver___024root___eval_initial__TOP__134(vlSelf);
    VTestDriver___024root___eval_initial__TOP__135(vlSelf);
    VTestDriver___024root___eval_initial__TOP__136(vlSelf);
    VTestDriver___024root___eval_initial__TOP__137(vlSelf);
    VTestDriver___024root___eval_initial__TOP__138(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___RANDOM
                   [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__is_body 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___RANDOM
                 [0U] >> 8U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
                                     [2U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[1U] 
        = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
                                      [2U]))) >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[2U] 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
           [0U] >> 1U);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__140(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__140\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__141(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__141\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__139(vlSelf);
    VTestDriver___024root___eval_initial__TOP__140(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__142(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__142\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__143(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__143\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__141(vlSelf);
    VTestDriver___024root___eval_initial__TOP__142(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM
           [0U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                                    [1U])) << 0x17U) 
                   | (QData)((IData)((0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                                      [2U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[1U] 
        = ((0xff800000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                           [0U] << 0x16U)) | (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                                                                        [1U])) 
                                                        << 0x17U) 
                                                       | (QData)((IData)(
                                                                         (0x7fffffU 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                                                                          [2U])))) 
                                                      >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[2U] 
        = (0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
                        [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__144(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__144\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___RANDOM
           [2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__145(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__145\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__143(vlSelf);
    VTestDriver___024root___eval_initial__TOP__144(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___RANDOM
           [2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___RANDOM
           [2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__146(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__146\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___RANDOM
           [2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__147(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__147\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__145(vlSelf);
    VTestDriver___024root___eval_initial__TOP__146(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[8U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [3U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__148(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__148\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__149(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__149\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__147(vlSelf);
    VTestDriver___024root___eval_initial__TOP__148(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__150(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__150\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__151(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__151\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__149(vlSelf);
    VTestDriver___024root___eval_initial__TOP__150(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__152(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__152\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__153(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__153\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__151(vlSelf);
    VTestDriver___024root___eval_initial__TOP__152(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__154(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__154\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__155(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__155\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__153(vlSelf);
    VTestDriver___024root___eval_initial__TOP__154(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__156(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__156\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__157(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__157\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__155(vlSelf);
    VTestDriver___024root___eval_initial__TOP__156(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__158(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__158\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__159(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__159\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__157(vlSelf);
    VTestDriver___024root___eval_initial__TOP__158(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__160(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__160\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__161(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__161\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__159(vlSelf);
    VTestDriver___024root___eval_initial__TOP__160(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__162(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__162\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__163(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__163\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__164(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__164\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__161(vlSelf);
    VTestDriver___024root___eval_initial__TOP__162(vlSelf);
    VTestDriver___024root___eval_initial__TOP__163(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__165(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__165\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__166(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__166\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__164(vlSelf);
    VTestDriver___024root___eval_initial__TOP__165(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}
