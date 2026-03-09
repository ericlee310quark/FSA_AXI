// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024unit.h"

extern "C" void* axi_tracker_init();

VL_INLINE_OPT void VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit(QData/*63:0*/ &axi_tracker_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestDriver___024unit____Vdpiimwrap_axi_tracker_init_TOP____024unit\n"); );
    // Body
    void* axi_tracker_init__Vfuncrtn__Vcvt;
    axi_tracker_init__Vfuncrtn__Vcvt = axi_tracker_init();
    axi_tracker_init__Vfuncrtn = VL_CVT_VP_Q(axi_tracker_init__Vfuncrtn__Vcvt);
}

extern "C" void axi_tracker_dpi(void* aw_info_ptr, svBit aw_fire, unsigned int aw_addr, char aw_size, char aw_len, svBit w_fire, const svOpenArrayHandle w_data, svBit w_last);

VL_INLINE_OPT void VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit(QData/*63:0*/ aw_info_ptr, CData/*0:0*/ aw_fire, IData/*31:0*/ aw_addr, CData/*7:0*/ aw_size, CData/*7:0*/ aw_len, CData/*0:0*/ w_fire, const VlUnpacked<CData/*7:0*/, 8> &w_data, CData/*0:0*/ w_last) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestDriver___024unit____Vdpiimwrap_axi_tracker_dpi__Vdpioc2_TOP____024unit\n"); );
    // Body
    void* aw_info_ptr__Vcvt;
    for (size_t aw_info_ptr__Vidx = 0; aw_info_ptr__Vidx < 1; ++aw_info_ptr__Vidx) aw_info_ptr__Vcvt = VL_CVT_Q_VP(aw_info_ptr);
    svBit aw_fire__Vcvt;
    for (size_t aw_fire__Vidx = 0; aw_fire__Vidx < 1; ++aw_fire__Vidx) aw_fire__Vcvt = aw_fire;
    unsigned int aw_addr__Vcvt;
    for (size_t aw_addr__Vidx = 0; aw_addr__Vidx < 1; ++aw_addr__Vidx) aw_addr__Vcvt = aw_addr;
    char aw_size__Vcvt;
    for (size_t aw_size__Vidx = 0; aw_size__Vidx < 1; ++aw_size__Vidx) aw_size__Vcvt = aw_size;
    char aw_len__Vcvt;
    for (size_t aw_len__Vidx = 0; aw_len__Vidx < 1; ++aw_len__Vidx) aw_len__Vcvt = aw_len;
    svBit w_fire__Vcvt;
    for (size_t w_fire__Vidx = 0; w_fire__Vidx < 1; ++w_fire__Vidx) w_fire__Vcvt = w_fire;
    static const int w_data__Vopenprops__ulims[2] = {7, 0};
    static const VerilatedVarProps w_data__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, w_data__Vopenprops__ulims);
    VerilatedDpiOpenVar w_data__Vopenarray (&w_data__Vopenprops, &w_data);
    svBit w_last__Vcvt;
    for (size_t w_last__Vidx = 0; w_last__Vidx < 1; ++w_last__Vidx) w_last__Vcvt = w_last;
    axi_tracker_dpi(aw_info_ptr__Vcvt, aw_fire__Vcvt, aw_addr__Vcvt, aw_size__Vcvt, aw_len__Vcvt, w_fire__Vcvt, &w_data__Vopenarray, w_last__Vcvt);
}

extern "C" int tsi_tick(int chip_id, svBit tsi_out_valid, svBit* tsi_out_ready, int tsi_out_bits, svBit* tsi_in_valid, svBit tsi_in_ready, int* tsi_in_bits);

VL_INLINE_OPT void VTestDriver___024unit____Vdpiimwrap_tsi_tick_TOP____024unit(IData/*31:0*/ chip_id, CData/*0:0*/ tsi_out_valid, CData/*0:0*/ &tsi_out_ready, IData/*31:0*/ tsi_out_bits, CData/*0:0*/ &tsi_in_valid, CData/*0:0*/ tsi_in_ready, IData/*31:0*/ &tsi_in_bits, IData/*31:0*/ &tsi_tick__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestDriver___024unit____Vdpiimwrap_tsi_tick_TOP____024unit\n"); );
    // Body
    int chip_id__Vcvt;
    for (size_t chip_id__Vidx = 0; chip_id__Vidx < 1; ++chip_id__Vidx) chip_id__Vcvt = chip_id;
    svBit tsi_out_valid__Vcvt;
    for (size_t tsi_out_valid__Vidx = 0; tsi_out_valid__Vidx < 1; ++tsi_out_valid__Vidx) tsi_out_valid__Vcvt = tsi_out_valid;
    svBit tsi_out_ready__Vcvt;
    int tsi_out_bits__Vcvt;
    for (size_t tsi_out_bits__Vidx = 0; tsi_out_bits__Vidx < 1; ++tsi_out_bits__Vidx) tsi_out_bits__Vcvt = tsi_out_bits;
    svBit tsi_in_valid__Vcvt;
    svBit tsi_in_ready__Vcvt;
    for (size_t tsi_in_ready__Vidx = 0; tsi_in_ready__Vidx < 1; ++tsi_in_ready__Vidx) tsi_in_ready__Vcvt = tsi_in_ready;
    int tsi_in_bits__Vcvt;
    int tsi_tick__Vfuncrtn__Vcvt;
    tsi_tick__Vfuncrtn__Vcvt = tsi_tick(chip_id__Vcvt, tsi_out_valid__Vcvt, &tsi_out_ready__Vcvt, tsi_out_bits__Vcvt, &tsi_in_valid__Vcvt, tsi_in_ready__Vcvt, &tsi_in_bits__Vcvt);
    tsi_out_ready = (1U & tsi_out_ready__Vcvt);
    tsi_in_valid = (1U & tsi_in_valid__Vcvt);
    tsi_in_bits = tsi_in_bits__Vcvt;
    tsi_tick__Vfuncrtn = tsi_tick__Vfuncrtn__Vcvt;
}

extern "C" void* memory_init(int chip_id, long long mem_size, long long word_size, long long line_size, long long id_bits, long long clock_hz, long long mem_base, int addr_bits);

VL_INLINE_OPT void VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(IData/*31:0*/ chip_id, QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ mem_base, IData/*31:0*/ addr_bits, QData/*63:0*/ &memory_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit\n"); );
    // Body
    int chip_id__Vcvt;
    for (size_t chip_id__Vidx = 0; chip_id__Vidx < 1; ++chip_id__Vidx) chip_id__Vcvt = chip_id;
    long long mem_size__Vcvt;
    for (size_t mem_size__Vidx = 0; mem_size__Vidx < 1; ++mem_size__Vidx) mem_size__Vcvt = mem_size;
    long long word_size__Vcvt;
    for (size_t word_size__Vidx = 0; word_size__Vidx < 1; ++word_size__Vidx) word_size__Vcvt = word_size;
    long long line_size__Vcvt;
    for (size_t line_size__Vidx = 0; line_size__Vidx < 1; ++line_size__Vidx) line_size__Vcvt = line_size;
    long long id_bits__Vcvt;
    for (size_t id_bits__Vidx = 0; id_bits__Vidx < 1; ++id_bits__Vidx) id_bits__Vcvt = id_bits;
    long long clock_hz__Vcvt;
    for (size_t clock_hz__Vidx = 0; clock_hz__Vidx < 1; ++clock_hz__Vidx) clock_hz__Vcvt = clock_hz;
    long long mem_base__Vcvt;
    for (size_t mem_base__Vidx = 0; mem_base__Vidx < 1; ++mem_base__Vidx) mem_base__Vcvt = mem_base;
    int addr_bits__Vcvt;
    for (size_t addr_bits__Vidx = 0; addr_bits__Vidx < 1; ++addr_bits__Vidx) addr_bits__Vcvt = addr_bits;
    void* memory_init__Vfuncrtn__Vcvt;
    memory_init__Vfuncrtn__Vcvt = memory_init(chip_id__Vcvt, mem_size__Vcvt, word_size__Vcvt, line_size__Vcvt, id_bits__Vcvt, clock_hz__Vcvt, mem_base__Vcvt, addr_bits__Vcvt);
    memory_init__Vfuncrtn = VL_CVT_VP_Q(memory_init__Vfuncrtn__Vcvt);
}

extern "C" void memory_tick(void* channel, svBit reset, svBit ar_valid, svBit* ar_ready, long long ar_addr, int ar_id, int ar_size, int ar_len, svBit aw_valid, svBit* aw_ready, long long aw_addr, int aw_id, int aw_size, int aw_len, svBit w_valid, svBit* w_ready, int w_strb, const svOpenArrayHandle w_data, svBit w_last, svBit* r_valid, svBit r_ready, int* r_id, int* r_resp, const svOpenArrayHandle r_data, svBit* r_last, svBit* b_valid, svBit b_ready, int* b_id, int* b_resp);

VL_INLINE_OPT void VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, QData/*63:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, QData/*63:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, const VlUnpacked<CData/*7:0*/, 8> &w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, VlUnpacked<CData/*7:0*/, 8> &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestDriver___024unit____Vdpiimwrap_memory_tick__Vdpioc2_TOP____024unit\n"); );
    // Body
    void* channel__Vcvt;
    for (size_t channel__Vidx = 0; channel__Vidx < 1; ++channel__Vidx) channel__Vcvt = VL_CVT_Q_VP(channel);
    svBit reset__Vcvt;
    for (size_t reset__Vidx = 0; reset__Vidx < 1; ++reset__Vidx) reset__Vcvt = reset;
    svBit ar_valid__Vcvt;
    for (size_t ar_valid__Vidx = 0; ar_valid__Vidx < 1; ++ar_valid__Vidx) ar_valid__Vcvt = ar_valid;
    svBit ar_ready__Vcvt;
    long long ar_addr__Vcvt;
    for (size_t ar_addr__Vidx = 0; ar_addr__Vidx < 1; ++ar_addr__Vidx) ar_addr__Vcvt = ar_addr;
    int ar_id__Vcvt;
    for (size_t ar_id__Vidx = 0; ar_id__Vidx < 1; ++ar_id__Vidx) ar_id__Vcvt = ar_id;
    int ar_size__Vcvt;
    for (size_t ar_size__Vidx = 0; ar_size__Vidx < 1; ++ar_size__Vidx) ar_size__Vcvt = ar_size;
    int ar_len__Vcvt;
    for (size_t ar_len__Vidx = 0; ar_len__Vidx < 1; ++ar_len__Vidx) ar_len__Vcvt = ar_len;
    svBit aw_valid__Vcvt;
    for (size_t aw_valid__Vidx = 0; aw_valid__Vidx < 1; ++aw_valid__Vidx) aw_valid__Vcvt = aw_valid;
    svBit aw_ready__Vcvt;
    long long aw_addr__Vcvt;
    for (size_t aw_addr__Vidx = 0; aw_addr__Vidx < 1; ++aw_addr__Vidx) aw_addr__Vcvt = aw_addr;
    int aw_id__Vcvt;
    for (size_t aw_id__Vidx = 0; aw_id__Vidx < 1; ++aw_id__Vidx) aw_id__Vcvt = aw_id;
    int aw_size__Vcvt;
    for (size_t aw_size__Vidx = 0; aw_size__Vidx < 1; ++aw_size__Vidx) aw_size__Vcvt = aw_size;
    int aw_len__Vcvt;
    for (size_t aw_len__Vidx = 0; aw_len__Vidx < 1; ++aw_len__Vidx) aw_len__Vcvt = aw_len;
    svBit w_valid__Vcvt;
    for (size_t w_valid__Vidx = 0; w_valid__Vidx < 1; ++w_valid__Vidx) w_valid__Vcvt = w_valid;
    svBit w_ready__Vcvt;
    int w_strb__Vcvt;
    for (size_t w_strb__Vidx = 0; w_strb__Vidx < 1; ++w_strb__Vidx) w_strb__Vcvt = w_strb;
    static const int w_data__Vopenprops__ulims[2] = {7, 0};
    static const VerilatedVarProps w_data__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, w_data__Vopenprops__ulims);
    VerilatedDpiOpenVar w_data__Vopenarray (&w_data__Vopenprops, &w_data);
    svBit w_last__Vcvt;
    for (size_t w_last__Vidx = 0; w_last__Vidx < 1; ++w_last__Vidx) w_last__Vcvt = w_last;
    svBit r_valid__Vcvt;
    svBit r_ready__Vcvt;
    for (size_t r_ready__Vidx = 0; r_ready__Vidx < 1; ++r_ready__Vidx) r_ready__Vcvt = r_ready;
    int r_id__Vcvt;
    int r_resp__Vcvt;
    static const int r_data__Vopenprops__ulims[2] = {7, 0};
    static const VerilatedVarProps r_data__Vopenprops(VLVT_UINT8, VLVD_OUT|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, r_data__Vopenprops__ulims);
    VerilatedDpiOpenVar r_data__Vopenarray (&r_data__Vopenprops, &r_data);
    svBit r_last__Vcvt;
    svBit b_valid__Vcvt;
    svBit b_ready__Vcvt;
    for (size_t b_ready__Vidx = 0; b_ready__Vidx < 1; ++b_ready__Vidx) b_ready__Vcvt = b_ready;
    int b_id__Vcvt;
    int b_resp__Vcvt;
    memory_tick(channel__Vcvt, reset__Vcvt, ar_valid__Vcvt, &ar_ready__Vcvt, ar_addr__Vcvt, ar_id__Vcvt, ar_size__Vcvt, ar_len__Vcvt, aw_valid__Vcvt, &aw_ready__Vcvt, aw_addr__Vcvt, aw_id__Vcvt, aw_size__Vcvt, aw_len__Vcvt, w_valid__Vcvt, &w_ready__Vcvt, w_strb__Vcvt, &w_data__Vopenarray, w_last__Vcvt, &r_valid__Vcvt, r_ready__Vcvt, &r_id__Vcvt, &r_resp__Vcvt, &r_data__Vopenarray, &r_last__Vcvt, &b_valid__Vcvt, b_ready__Vcvt, &b_id__Vcvt, &b_resp__Vcvt);
    ar_ready = (1U & ar_ready__Vcvt);
    aw_ready = (1U & aw_ready__Vcvt);
    w_ready = (1U & w_ready__Vcvt);
    r_valid = (1U & r_valid__Vcvt);
    r_id = r_id__Vcvt;
    r_resp = r_resp__Vcvt;
    r_last = (1U & r_last__Vcvt);
    b_valid = (1U & b_valid__Vcvt);
    b_id = b_id__Vcvt;
    b_resp = b_resp__Vcvt;
}
