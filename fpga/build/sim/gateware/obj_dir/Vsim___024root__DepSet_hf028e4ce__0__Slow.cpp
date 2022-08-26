// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim___024root.h"

VL_ATTR_COLD void Vsim___024root___initial__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->sim_trace = 1U;
}

VL_ATTR_COLD void Vsim___024root___final(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___final\n"); );
}

VL_ATTR_COLD void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sim_trace = VL_RAND_RESET_I(1);
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->serial_source_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_source_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_source_data = VL_RAND_RESET_I(8);
    vlSelf->serial_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
