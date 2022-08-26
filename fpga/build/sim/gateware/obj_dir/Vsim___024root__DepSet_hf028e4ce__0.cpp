// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim___024root.h"

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
    if (VL_UNLIKELY((vlSelf->serial_source_ready & 0xfeU))) {
        Verilated::overWidthError("serial_source_ready");}
    if (VL_UNLIKELY((vlSelf->serial_sink_valid & 0xfeU))) {
        Verilated::overWidthError("serial_sink_valid");}
}
#endif  // VL_DEBUG
