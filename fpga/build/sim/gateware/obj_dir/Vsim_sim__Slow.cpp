// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim_sim.h"

void Vsim_sim___ctor_var_reset(Vsim_sim* vlSelf);

Vsim_sim::Vsim_sim(Vsim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_sim___ctor_var_reset(this);
}

void Vsim_sim::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim_sim::~Vsim_sim() {
}
