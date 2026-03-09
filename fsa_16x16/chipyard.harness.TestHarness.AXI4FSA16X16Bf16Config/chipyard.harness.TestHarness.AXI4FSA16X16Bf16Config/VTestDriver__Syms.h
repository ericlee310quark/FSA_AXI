// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTDRIVER__SYMS_H_
#define VERILATED_VTESTDRIVER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTestDriver.h"

// INCLUDE MODULE CLASSES
#include "VTestDriver___024root.h"
#include "VTestDriver___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTestDriver__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTestDriver* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTestDriver___024root          TOP;
    VTestDriver___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TestDriver;
    VerilatedScope __Vscope_TestDriver__testHarness;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__binder__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1__TLBroadcastTracker;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1__TLBroadcastTracker_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1__TLBroadcastTracker_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1__TLBroadcastTracker_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__broadcast_1__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__axi4yank;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__decoder;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_5;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_6;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__loadQueue_7;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_5;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_6;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__dma__storeQueue_7;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__fsa__mxControl;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__fsa__mxControl__fsm_list_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__fsa__fsa__mxControl__fsm_list_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__tl2axi4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__tl2axi4__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus__coupler_from_port_named_serial_tl_0_in__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus__coupler_to_fsa__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus__fbus_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus__fbus_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__picker__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__wrapped_zero_device__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__wrapped_zero_device__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__wrapped_zero_device__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__wrapped_zero_device__zero__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__coupler_from_bus_named_fbus__widget__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__serdesser__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__tsi2tl;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VTestDriver__Syms(VerilatedContext* contextp, const char* namep, VTestDriver* modelp);
    ~VTestDriver__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
