// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim___024root.h"

VL_INLINE_OPT void Vsim___024root___sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0));
    vlSelf->serial_source_data = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data;
    vlSelf->serial_source_valid = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable;
}

void Vsim_sim___sequent__TOP__sim__2(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__3(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__4(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__5(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__6(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__7(Vsim_sim* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__8(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__9(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__10(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__11(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__12(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__13(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__14(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__15(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__16(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__17(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__18(Vsim_VexRiscv* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__19(Vsim_VexRiscv* vlSelf);
void Vsim_sim___sequent__TOP__sim__8(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__9(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__10(Vsim_sim* vlSelf);
void Vsim_sim___sequent__TOP__sim__11(Vsim_sim* vlSelf);
void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20(Vsim_VexRiscv* vlSelf);
void Vsim_sim___combo__TOP__sim__0(Vsim_sim* vlSelf);

void Vsim___024root___eval(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->sys_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__sys_clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsim_sim___sequent__TOP__sim__2((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__3((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__4((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__5((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__6((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__7((&vlSymsp->TOP__sim));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__4((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__5((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__6((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__7((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__8((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__9((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__10((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__11((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__12((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__13((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__14((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__15((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__16((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__17((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__18((&vlSymsp->TOP__sim__VexRiscv));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__19((&vlSymsp->TOP__sim__VexRiscv));
        Vsim___024root___sequent__TOP__0(vlSelf);
        Vsim_sim___sequent__TOP__sim__8((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__9((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__10((&vlSymsp->TOP__sim));
        Vsim_sim___sequent__TOP__sim__11((&vlSymsp->TOP__sim));
        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20((&vlSymsp->TOP__sim__VexRiscv));
    }
    Vsim_sim___combo__TOP__sim__0((&vlSymsp->TOP__sim));
    // Final
    vlSelf->__Vclklast__TOP__sys_clk = vlSelf->sys_clk;
}
