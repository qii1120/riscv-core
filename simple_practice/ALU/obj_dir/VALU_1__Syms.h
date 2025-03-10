// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_1__SYMS_H_
#define VERILATED_VALU_1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VALU_1.h"

// INCLUDE MODULE CLASSES
#include "VALU_1___024root.h"

// SYMS CLASS (contains all model state)
class VALU_1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VALU_1* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VALU_1___024root               TOP;

    // CONSTRUCTORS
    VALU_1__Syms(VerilatedContext* contextp, const char* namep, VALU_1* modelp);
    ~VALU_1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
