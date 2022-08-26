// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

void Vsim_VexRiscv___ctor_var_reset(Vsim_VexRiscv* vlSelf);

Vsim_VexRiscv::Vsim_VexRiscv(Vsim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_VexRiscv___ctor_var_reset(this);
}

void Vsim_VexRiscv::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim_VexRiscv::~Vsim_VexRiscv() {
}
