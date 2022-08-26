// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim___024root.h"

void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf);

Vsim___024root::Vsim___024root(Vsim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim___024root___ctor_var_reset(this);
}

void Vsim___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim___024root::~Vsim___024root() {
}
