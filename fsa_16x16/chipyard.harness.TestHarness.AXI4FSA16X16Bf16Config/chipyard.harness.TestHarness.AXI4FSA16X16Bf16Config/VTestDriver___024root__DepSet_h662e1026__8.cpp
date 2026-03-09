// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

void VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(IData/*31:0*/ chip_id, QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ mem_base, IData/*31:0*/ addr_bits, QData/*63:0*/ &memory_init__Vfuncrtn);
void VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, QData/*63:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, QData/*63:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, const VlUnpacked<CData/*7:0*/, 8> &w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, VlUnpacked<CData/*7:0*/, 8> &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp);

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__996(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__996\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__0__Vfuncout;
    __Vfunc_memory_init__0__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__ar_ready;
    __Vtask_memory_tick__Vdpioc2__1__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__aw_ready;
    __Vtask_memory_tick__Vdpioc2__1__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__w_ready;
    __Vtask_memory_tick__Vdpioc2__1__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__r_valid;
    __Vtask_memory_tick__Vdpioc2__1__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__1__r_id;
    __Vtask_memory_tick__Vdpioc2__1__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__1__r_resp;
    __Vtask_memory_tick__Vdpioc2__1__r_resp = 0;
    VlUnpacked<CData/*7:0*/, 8> __Vtask_memory_tick__Vdpioc2__1__r_data;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_memory_tick__Vdpioc2__1__r_data[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__r_last;
    __Vtask_memory_tick__Vdpioc2__1__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__Vdpioc2__1__b_valid;
    __Vtask_memory_tick__Vdpioc2__1__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__1__b_id;
    __Vtask_memory_tick__Vdpioc2__1__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__Vdpioc2__1__b_resp;
    __Vtask_memory_tick__Vdpioc2__1__b_resp = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_req_sramAddr)) 
                              << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_req_sramAddr)) 
                                            << 0x31U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_sramAddr)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_sramAddr)) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_sramAddr)) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_sramAddr) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_sramAddr) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_sramAddr) 
                                                                              << 7U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_sramAddr) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_req_sramAddr)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_req_sramAddr)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_sramAddr)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_sramAddr)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_sramAddr)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_sramAddr) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_sramAddr) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_sramAddr))))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_13_req_sramAddr) 
                      << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_req_sramAddr) 
                                    << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_11_req_sramAddr) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_req_sramAddr) 
                                                     << 6U) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_sramAddr) 
                                                       >> 1U)))));
    __Vtemp_7[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_15_req_sramAddr) 
                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_14_req_sramAddr) 
                                 << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_13_req_sramAddr) 
                                           >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_0_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_7[(((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)))))) 
                        | (__Vtemp_7[(3U & (((IData)(7U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 1ULL, 0x5f5e100ULL, 0x80000000ULL, 0x20U, __Vfunc_memory_init__0__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel 
                = __Vfunc_memory_init__0__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized = 1U;
        }
        __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_size)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_size)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_size)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_size) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_size) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_size)))))))));
        __Vtemp_17[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_size) 
                           << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_size)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_size)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_size)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_size) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_size) 
                                                                              << 0xaU) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_size)))))))) 
                                                >> 0x20U)));
        __Vtemp_17[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_size) 
                           << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_req_size) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_req_size) 
                                            << 6U) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_size) 
                                              >> 4U))));
        __Vtemp_17[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_req_size) 
                           << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_11_req_size) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_req_size) 
                                          << 4U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_size) 
                                          >> 6U))));
        __Vtemp_17[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_15_req_size) 
                           << 0x16U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_14_req_size) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_13_req_size) 
                                          << 2U) | 
                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_req_size) 
                                          >> 8U))));
        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset), vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_valid, __Vtask_memory_tick__Vdpioc2__1__ar_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_0_bits_ar_bits_addr)), 0U, 3U, 
                                                                                (0x7fU 
                                                                                & (((0x9fU 
                                                                                >= 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value)))))
                                                                                 ? 
                                                                                (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (__Vtemp_17[
                                                                                (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value))))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value))))))) 
                                                                                | (__Vtemp_17[
                                                                                (7U 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value))) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(0xaU) 
                                                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__arPtr_value))))))
                                                                                 : 0U) 
                                                                                - (IData)(1U))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_valid), __Vtask_memory_tick__Vdpioc2__1__aw_ready, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_fsa_0_bits_aw_bits_addr)), 0U, 3U, (IData)(vlSelf->__VdfgTmp_h336b5e92__0), vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_valid, __Vtask_memory_tick__Vdpioc2__1__w_ready, 0xffU, vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_data, 
                                                                                (7U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__wBeatCnt)), __Vtask_memory_tick__Vdpioc2__1__r_valid, 1U, __Vtask_memory_tick__Vdpioc2__1__r_id, __Vtask_memory_tick__Vdpioc2__1__r_resp, __Vtask_memory_tick__Vdpioc2__1__r_data, __Vtask_memory_tick__Vdpioc2__1__r_last, __Vtask_memory_tick__Vdpioc2__1__b_valid, 1U, __Vtask_memory_tick__Vdpioc2__1__b_id, __Vtask_memory_tick__Vdpioc2__1__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready 
            = __Vtask_memory_tick__Vdpioc2__1__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready 
            = __Vtask_memory_tick__Vdpioc2__1__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready 
            = __Vtask_memory_tick__Vdpioc2__1__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid 
            = __Vtask_memory_tick__Vdpioc2__1__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id 
            = __Vtask_memory_tick__Vdpioc2__1__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp 
            = __Vtask_memory_tick__Vdpioc2__1__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[7U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[6U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [6U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[5U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [5U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[4U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [4U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[3U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [3U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[2U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[1U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data[0U] 
            = __Vtask_memory_tick__Vdpioc2__1__r_data
            [0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last 
            = __Vtask_memory_tick__Vdpioc2__1__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id 
            = __Vtask_memory_tick__Vdpioc2__1__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp 
            = __Vtask_memory_tick__Vdpioc2__1__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits 
            = ((0xffffffffff000000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits) 
               | (IData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                    [1U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                   [0U])))));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits 
            = ((0xffff000000ffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                    [5U] << 0x10U) 
                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                       [4U] << 8U) 
                                      | vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                      [3U])))) << 0x18U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits 
            = ((0xffffffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits) 
               | ((QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                    [7U] << 8U) | vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data
                                   [6U]))) << 0x30U));
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_bits;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4414(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4414\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat;
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_2) 
                       & (1U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                      & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))))) {
        VL_WRITEF_NX("[%0t] %%Error: TSIToTileLink.sv:116: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl: Assertion failed: Bad TSI command\n    at TSIToTileLink.scala:137 assert(false.B, \"Bad TSI command\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TSIToTileLink.sv", 116, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TSIToTileLink.sv:118: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TSIToTileLink.sv", 118, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4416(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4416\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                     & (0U != (vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                               >> 1U))))) {
        VL_WRITEF_NX("[%0t] %%Error: TestHarness.sv:351: Assertion failed in %NTestDriver.testHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at FSASimTSI.scala:32 assert(!error, \"*** FAILED *** (exit code = %%%%d)\\n\", exit >> 1.U)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,(vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                         >> 1U));
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TestHarness.sv", 351, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TestHarness.sv:353: Assertion failed in %NTestDriver.testHarness\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TestHarness.sv", 353, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) & (
                                                   (7U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                >> 6U)))) 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:177: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 177, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:179: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 179, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4417(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4417\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:183: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 183, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:185: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 185, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x206ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:189: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 189, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:191: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 191, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4418(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4418\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (6ULL == (0x187ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:195: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 195, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:197: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 197, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:201: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 201, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:203: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 203, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4419(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4419\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (2U < (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                            >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:207: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 207, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:209: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 209, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0xfU != (0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                 >> 0x1aU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:213: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 213, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:215: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 215, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4420(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4420\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4000000000000006ULL == (0x4000000000000007ULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:219: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 219, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:221: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 221, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) & (
                                                   (7U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                >> 6U)))) 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:225: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 225, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:227: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 227, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4421(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4421\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:231: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 231, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:233: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 233, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x207ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:237: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 237, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:239: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 239, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (7ULL == (0x187ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:243: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 243, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:245: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 245, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4422(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4422\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:249: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 249, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:251: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 251, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (2U < (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                            >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:255: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 255, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:257: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 257, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4423(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4423\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)((0U != (7U & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                        >> 3U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:261: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 261, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:263: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 263, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0xfU != (0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                 >> 0x1aU))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:267: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 267, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:269: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 269, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4424(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4424\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4000000000000007ULL == (0x4000000000000007ULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:273: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 273, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:275: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 275, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x204ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:279: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 279, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:281: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 281, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4425(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4425\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((7U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                 >> 6U)))) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6) 
                              | (0x80U == (0xffU & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                            >> 0x12U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:285: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 285, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:287: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 287, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x204ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:291: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 291, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:293: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 293, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4426(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4426\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:297: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 297, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:299: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 299, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:303: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 303, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:305: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 305, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4427(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4427\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x1aU))) 
                        != (((IData)(((0ULL != (0x180ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                      | ((0x840ULL 
                                          == (0x840ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                         | (0xc00ULL 
                                            == (0xc00ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                             << 3U) | (((IData)(((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                 | ((0x840ULL 
                                                     == 
                                                     (0x840ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                    | (0x800ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                        << 2U) | (((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x180ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                            | ((0x40ULL 
                                                                == 
                                                                (0x840ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                               | (0x400ULL 
                                                                  == 
                                                                  (0xc00ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:309: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 309, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:311: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 311, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4428(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4428\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4000000000000004ULL == (0x4000000000000007ULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:315: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 315, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:317: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 317, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) & (
                                                   (7U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                >> 6U)))) 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6) 
                                                      | (0x80U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                     >> 0x12U))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:321: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 321, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:323: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 323, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4429(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4429\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x200ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:327: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 327, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:329: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 329, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:333: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 333, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:335: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 335, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4430(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4430\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:339: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 339, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:341: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 341, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x1aU))) 
                        != (((IData)(((0ULL != (0x180ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                      | ((0x840ULL 
                                          == (0x840ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                         | (0xc00ULL 
                                            == (0xc00ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                             << 3U) | (((IData)(((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                 | ((0x840ULL 
                                                     == 
                                                     (0x840ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                    | (0x800ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                        << 2U) | (((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x180ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                            | ((0x40ULL 
                                                                == 
                                                                (0x840ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                               | (0x400ULL 
                                                                  == 
                                                                  (0xc00ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:345: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 345, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:347: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 347, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4431(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4431\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) & (
                                                   (7U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                >> 6U)))) 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6) 
                                                      | (0x80U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                     >> 0x12U))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:351: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 351, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:353: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 353, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x201ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:357: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 357, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:359: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 359, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4432(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4432\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:363: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 363, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:365: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 365, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:369: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 369, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:371: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 371, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4433(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4433\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0xfU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                >> 0x1aU)) 
                                       & (~ (((IData)(
                                                      ((0ULL 
                                                        != 
                                                        (0x180ULL 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                       | ((0x840ULL 
                                                           == 
                                                           (0x840ULL 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                          | (0xc00ULL 
                                                             == 
                                                             (0xc00ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                              << 3U) 
                                             | (((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x180ULL 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                          | ((0x840ULL 
                                                              == 
                                                              (0x840ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | (0x800ULL 
                                                                == 
                                                                (0xc00ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0x400ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             ((0ULL 
                                                               != 
                                                               (0x180ULL 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                              | ((0x40ULL 
                                                                  == 
                                                                  (0x840ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                 | (0ULL 
                                                                    == 
                                                                    (0xc00ULL 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:375: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 375, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:377: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 377, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4434(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4434\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)(((0ULL == (0x300ULL 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:381: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 381, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:383: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 383, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x202ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:387: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 387, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:389: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 389, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4435(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4435\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:393: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 393, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:395: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 395, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (4U < (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                            >> 3U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:399: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 399, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:401: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 401, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4436(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4436\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x1aU))) 
                        != (((IData)(((0ULL != (0x180ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                      | ((0x840ULL 
                                          == (0x840ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                         | (0xc00ULL 
                                            == (0xc00ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                             << 3U) | (((IData)(((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                 | ((0x840ULL 
                                                     == 
                                                     (0x840ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                    | (0x800ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                        << 2U) | (((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x180ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                            | ((0x40ULL 
                                                                == 
                                                                (0x840ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                               | (0x400ULL 
                                                                  == 
                                                                  (0xc00ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:405: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 405, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:407: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 407, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4437(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4437\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ (IData)(((0ULL == (0x300ULL 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:411: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 411, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:413: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 413, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x203ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:417: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 417, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:419: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 419, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4438(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4438\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:423: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 423, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:425: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 425, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x23ULL == (0x27ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:429: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 429, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:431: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 431, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4439(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4439\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x1aU))) 
                        != (((IData)(((0ULL != (0x180ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                      | ((0x840ULL 
                                          == (0x840ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                         | (0xc00ULL 
                                            == (0xc00ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                             << 3U) | (((IData)(((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                 | ((0x840ULL 
                                                     == 
                                                     (0x840ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                    | (0x800ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                        << 2U) | (((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x180ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                            | ((0x40ULL 
                                                                == 
                                                                (0x840ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                               | (0x400ULL 
                                                                  == 
                                                                  (0xc00ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:435: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 435, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:437: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 437, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4440(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4440\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) & (
                                                   (7U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                >> 6U)))) 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:441: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 441, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:443: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 443, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x205ULL == (0x207ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:447: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 447, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:449: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 449, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4441(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4441\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 6U))))) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 0xaU)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:453: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 453, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:455: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 455, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & (0U != (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 4U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:459: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 459, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:461: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 461, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4442(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4442\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                     & ((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x1aU))) 
                        != (((IData)(((0ULL != (0x180ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                      | ((0x840ULL 
                                          == (0x840ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                         | (0xc00ULL 
                                            == (0xc00ULL 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                             << 3U) | (((IData)(((0ULL 
                                                  != 
                                                  (0x180ULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                 | ((0x840ULL 
                                                     == 
                                                     (0x840ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                    | (0x800ULL 
                                                       == 
                                                       (0xc00ULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                        << 2U) | (((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x180ULL 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                            | ((0x40ULL 
                                                                == 
                                                                (0x840ULL 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                               | (0x400ULL 
                                                                  == 
                                                                  (0xc00ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            ((0ULL 
                                                              != 
                                                              (0x180ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                             | ((0x40ULL 
                                                                 == 
                                                                 (0x840ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                                                                | (0ULL 
                                                                   == 
                                                                   (0xc00ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:465: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 465, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:467: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 467, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4443(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4443\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x4000000000000005ULL == (0x4000000000000007ULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:471: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 471, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:473: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 473, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (0x38000000U == (0x38000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:477: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 477, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:479: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 479, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4444(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4444\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                        >> 9U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:483: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 483, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:485: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 485, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U == (0xc0000U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:489: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 489, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:491: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 491, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x19U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:495: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 495, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:497: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 497, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4445(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4445\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:501: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 501, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:503: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 503, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:507: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 507, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:509: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 509, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x20000200U == (0x38000200U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:513: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 513, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:515: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 515, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4446(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4446\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x20000000U == (0x380c0000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:519: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 519, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:521: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 521, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x26000000U == (0x3e000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:525: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 525, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:527: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 527, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4447(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4447\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x24000000U == (0x3e000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:531: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 531, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:533: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 533, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x20000000U == (0x38000000U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:537: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 537, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:539: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 539, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4448(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4448\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x28000200U == (0x38000200U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:543: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 543, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:545: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 545, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x28000000U == (0x380c0000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:549: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 549, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:551: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 551, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4449(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4449\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x2e000000U == (0x3e000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:555: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 555, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:557: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 557, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x2c000000U == (0x3e000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:561: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 561, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:563: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 563, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4450(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4450\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x28000000U == (0x38000000U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0) 
                           | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                              >> 2U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:567: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 567, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:569: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 569, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x200U == (0x38000200U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:573: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 573, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:575: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 575, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4451(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4451\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x38000000U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x19U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:579: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 579, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:581: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 581, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (0x38000000U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:585: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 585, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:587: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 587, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4452(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4452\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x8000200U == (0x38000200U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:591: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 591, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:593: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 593, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x8000000U == (0x38000000U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x19U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:597: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 597, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:599: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 599, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4453(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4453\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x8000000U == (0x38000000U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (~ ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0) 
                           | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                              >> 2U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:603: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 603, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:605: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 605, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x10000200U == (0x38000200U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:609: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 609, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:611: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 611, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4454(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4454\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x10000000U == (0x38000000U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x19U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:615: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 615, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:617: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 617, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0x10000000U == (0x38000000U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                        >> 2U)))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:621: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 621, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:623: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 623, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4455(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4455\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:627: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 627, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:629: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 629, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 3U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:633: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 633, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:635: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 635, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4456(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4456\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 6U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:639: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 639, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:641: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 641, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) 
                     & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 9U))) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:645: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 645, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:647: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 647, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4457(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4457\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0xffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                            >> 0xaU))) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:651: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 651, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:653: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 653, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x1bU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:657: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 657, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:659: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 659, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4458(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4458\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x19U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:663: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 663, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:665: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 665, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x11U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:669: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 669, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:671: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 671, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4459(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4459\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:675: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 675, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:677: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 677, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 1U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:681: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 681, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:683: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 683, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4460(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4460\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:687: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 687, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:689: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 689, "");
        }
    }
    if (VL_UNLIKELY((3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_0) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                              >> (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                >> 9U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:693: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 693, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:695: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 695, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4461(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4461\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (~ ((3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                  >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                            >> 9U)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:699: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 699, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:701: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 701, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                   >> 0x1bU)) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))
                                                   ? 
                                                  (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))))
                                                   : 0U)) 
                           | ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x1bU)) == 
                              ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data))))))
                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:705: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 705, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:707: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 707, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4462(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4462\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                       >> 6U))) != 
                        (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x11U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:711: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 711, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:713: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 713, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                   >> 0x1bU)) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                            >> 
                                                            (4U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                                >> 7U))) 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                                   >> 7U))) 
                                                              >> 1U))))))
                                                   : 0U)) 
                           | ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 0x1bU)) == 
                              ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 
                                                        (4U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                            >> 7U))) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                       >> 
                                                       (4U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                           >> 7U))) 
                                                      >> 1U))))))
                                : 0U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:717: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 717, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:719: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 719, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4463(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4463\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x11U)) != (7U & 
                                              (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                                                >> 
                                                (4U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                    >> 7U))) 
                                               >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:723: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 723, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:725: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 725, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid)) 
                        & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                          >> 9U))) 
                           == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                     >> 9U)))) & (6U 
                                                  != 
                                                  (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                      >> 0x1bU)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready)) 
                           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q_io_deq_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:729: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 729, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:731: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 731, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4464(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4464\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ ((((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                               >> 9U))) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1)) 
                                  != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37) 
                                      & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                            >> 9U)))) 
                                 | (~ ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                   >> 9U))) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:735: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 735, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:737: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 737, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:741: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 741, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:743: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 743, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4465(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4465\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & (~ (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_1) 
                                 >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                           >> 9U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:747: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 747, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:749: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 749, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                               >> 0x11U)) != (7U & 
                                              (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
                                                >> 
                                                (4U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                    >> 7U))) 
                                               >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:753: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:52 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 753, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:755: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 755, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4466(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4466\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_13.sv:759: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: TileLink timeout expired (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:31)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 759, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_13.sv:761: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_13.sv", 761, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:167: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 167, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:169: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 169, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4467(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4467\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                   ? 1U : 4U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:173: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 173, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:175: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 175, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:179: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 179, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:181: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 181, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4468(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4468\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:185: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 185, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:187: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 187, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0xfU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:191: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 191, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:193: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 193, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4469(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4469\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16) 
                            | (0x80U == (0xffU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 8U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:233: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 233, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:235: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 235, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:239: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 239, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:241: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 241, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4470(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4470\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
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
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:245: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 245, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:247: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 247, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4471(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4471\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16) 
                            | (0x80U == (0xffU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 8U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:251: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 251, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:253: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 253, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:257: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 257, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:259: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 259, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4472(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4472\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
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
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:263: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 263, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:265: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 265, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4473(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4473\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16) 
                            | (0x80U == (0xffU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 8U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:269: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 269, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:271: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 271, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:275: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 275, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:277: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 277, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4474(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4474\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                             & (~ ((8U & ((((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
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
                                           | (((~ (
                                                   (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                   | (7U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 1U))) 
                                              & ((~ 
                                                  ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__pow2size)) 
                                                   | (7U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state)))) 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                          << 3U)) | 
                                   ((4U & ((((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3f2efc6__0)) 
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
                                            | ((~ (
                                                   (~ 
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
                                    | ((2U & ((((0U 
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
                                       | (1U & (((0U 
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
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:281: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 281, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:283: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 283, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4475(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4475\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:287: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 287, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:289: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 289, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:293: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 293, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:295: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 295, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4476(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4476\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
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
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:299: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 299, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:301: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 301, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4477(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4477\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:305: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 305, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:307: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 307, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 2U)) 
                                          << 2U)) | (IData)(vlSelf->__VdfgTmp_hba643274__0))))))) {
        VL_WRITEF_NX("[%0t] %%Error: TLMonitor_14.sv:311: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:77:45)\n    at Monitor.scala:45 assert(cond, message)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 311, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: TLMonitor_14.sv:313: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/TLMonitor_14.sv", 313, "");
        }
    }
}
