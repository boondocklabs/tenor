// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsim.h"
#include "Vsim__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsim::Vsim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsim__Syms(_vcontextp__, _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , sim_trace{vlSymsp->TOP.sim_trace}
    , serial_source_valid{vlSymsp->TOP.serial_source_valid}
    , serial_source_ready{vlSymsp->TOP.serial_source_ready}
    , serial_source_data{vlSymsp->TOP.serial_source_data}
    , serial_sink_valid{vlSymsp->TOP.serial_sink_valid}
    , serial_sink_ready{vlSymsp->TOP.serial_sink_ready}
    , serial_sink_data{vlSymsp->TOP.serial_sink_data}
    , sim{vlSymsp->TOP.sim}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsim::Vsim(const char* _vcname__)
    : Vsim(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsim::~Vsim() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsim___024root___eval_initial(Vsim___024root* vlSelf);
void Vsim___024root___eval_settle(Vsim___024root* vlSelf);
void Vsim___024root___eval(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim___024root___final(Vsim___024root* vlSelf);

static void _eval_initial_loop(Vsim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsim___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsim___024root___eval_settle(&(vlSymsp->TOP));
        Vsim___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsim___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsim::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsim::final() {
    Vsim___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vsim___024root__trace_init_top(Vsim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsim___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsim___024root__trace_register(Vsim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsim::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
