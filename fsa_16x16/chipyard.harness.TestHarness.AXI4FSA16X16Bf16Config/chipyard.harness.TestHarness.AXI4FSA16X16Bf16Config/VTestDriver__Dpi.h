// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTDRIVER__DPI_H_
#define VERILATED_VTESTDRIVER__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/AXI4WriteTracker.v:4:30
    extern void axi_tracker_dpi(void* aw_info_ptr, svBit aw_fire, unsigned int aw_addr, char aw_size, char aw_len, svBit w_fire, const svOpenArrayHandle w_data, svBit w_last);
    // DPI import at /data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/AXI4WriteTracker.v:2:33
    extern void* axi_tracker_init();
    // DPI import at /data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/SimDRAM.v:1:33
    extern void* memory_init(int chip_id, long long mem_size, long long word_size, long long line_size, long long id_bits, long long clock_hz, long long mem_base, int addr_bits);
    // DPI import at /data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/SimDRAM.v:13:30
    extern void memory_tick(void* channel, svBit reset, svBit ar_valid, svBit* ar_ready, long long ar_addr, int ar_id, int ar_size, int ar_len, svBit aw_valid, svBit* aw_ready, long long aw_addr, int aw_id, int aw_size, int aw_len, svBit w_valid, svBit* w_ready, int w_strb, const svOpenArrayHandle w_data, svBit w_last, svBit* r_valid, svBit r_ready, int* r_id, int* r_resp, const svOpenArrayHandle r_data, svBit* r_last, svBit* b_valid, svBit b_ready, int* b_id, int* b_resp);
    // DPI import at /data2/m0eric0315/hw/chipyard-fsa/sims/verilator/generated-src/chipyard.harness.TestHarness.AXI4FSA16X16Bf16Config/gen-collateral/FSASimTSI.v:2:29
    extern int tsi_tick(int chip_id, svBit tsi_out_valid, svBit* tsi_out_ready, int tsi_out_bits, svBit* tsi_in_valid, svBit tsi_in_ready, int* tsi_in_bits);

#ifdef __cplusplus
}
#endif

#endif  // guard
