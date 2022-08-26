// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim___024root.h"

VL_ATTR_COLD void Vsim___024root___settle__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->serial_source_valid = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable;
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0));
    vlSelf->serial_source_data = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data;
}

VL_ATTR_COLD void Vsim___024root___initial__TOP__0(Vsim___024root* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___initial__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_sim___initial__TOP__sim__0(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___initial__TOP__sim__1(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    // Body
    Vsim___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsim_VexRiscv___initial__TOP__sim__VexRiscv__0((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_sim___initial__TOP__sim__0((&vlSymsp->TOP__sim));
    Vsim_sim___initial__TOP__sim__1((&vlSymsp->TOP__sim));
    vlSelf->__Vclklast__TOP__sys_clk = vlSelf->sys_clk;
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf);
VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__0(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__1(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__2(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__3(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__4(Vsim_sim* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20(Vsim_VexRiscv* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_settle(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_settle\n"); );
    // Body
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__0((&vlSymsp->TOP__sim__VexRiscv));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__1((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__2((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__3((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__4((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__5((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__6((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_VexRiscv___settle__TOP__sim__VexRiscv__7((&vlSymsp->TOP__sim__VexRiscv));
    Vsim_sim___settle__TOP__sim__0((&vlSymsp->TOP__sim));
    Vsim_sim___settle__TOP__sim__1((&vlSymsp->TOP__sim));
    Vsim_sim___settle__TOP__sim__2((&vlSymsp->TOP__sim));
    Vsim_sim___settle__TOP__sim__3((&vlSymsp->TOP__sim));
    Vsim_sim___settle__TOP__sim__4((&vlSymsp->TOP__sim));
    Vsim___024root___settle__TOP__0(vlSelf);
    Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20((&vlSymsp->TOP__sim__VexRiscv));
}
