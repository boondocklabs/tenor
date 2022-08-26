// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM___024ROOT_H_
#define VERILATED_VSIM___024ROOT_H_  // guard

#include "verilated.h"

class Vsim__Syms;
class Vsim_sim;

VL_MODULE(Vsim___024root) {
  public:
    // CELLS
    Vsim_sim* sim;

    // DESIGN SPECIFIC STATE
    VL_IN8(sys_clk,0,0);
    VL_OUT8(sim_trace,0,0);
    VL_OUT8(serial_source_valid,0,0);
    VL_IN8(serial_source_ready,0,0);
    VL_OUT8(serial_source_data,7,0);
    VL_IN8(serial_sink_valid,0,0);
    VL_OUT8(serial_sink_ready,0,0);
    VL_IN8(serial_sink_data,7,0);
    CData/*0:0*/ __Vclklast__TOP__sys_clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim___024root(Vsim__Syms* symsp, const char* name);
    ~Vsim___024root();
    VL_UNCOPYABLE(Vsim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
