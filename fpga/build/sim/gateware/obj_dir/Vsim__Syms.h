// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIM__SYMS_H_
#define VERILATED_VSIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsim.h"

// INCLUDE MODULE CLASSES
#include "Vsim___024root.h"
#include "Vsim_sim.h"
#include "Vsim_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vsim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsim___024root                 TOP;
    Vsim_sim                       TOP__sim;
    Vsim_VexRiscv                  TOP__sim__VexRiscv;

    // SCOPE NAMES
    VerilatedScope __Vscope_sim__VexRiscv;

    // CONSTRUCTORS
    Vsim__Syms(VerilatedContext* contextp, const char* namep, Vsim* modelp);
    ~Vsim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
