// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder4.h for the primary calling header

#include "Vadder4__pch.h"
#include "Vadder4___024root.h"

void Vadder4___024root___ico_sequent__TOP__0(Vadder4___024root* vlSelf);

void Vadder4___024root___eval_ico(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vadder4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vadder4___024root___ico_sequent__TOP__0(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ adder4__DOT____Vcellout__fa1____pinNumber5;
    adder4__DOT____Vcellout__fa1____pinNumber5 = 0;
    CData/*0:0*/ adder4__DOT____Vcellout__fa2____pinNumber5;
    adder4__DOT____Vcellout__fa2____pinNumber5 = 0;
    CData/*0:0*/ adder4__DOT____Vcellout__fa3____pinNumber5;
    adder4__DOT____Vcellout__fa3____pinNumber5 = 0;
    CData/*0:0*/ adder4__DOT__fa1__DOT__s1;
    adder4__DOT__fa1__DOT__s1 = 0;
    CData/*0:0*/ adder4__DOT__fa2__DOT__s1;
    adder4__DOT__fa2__DOT__s1 = 0;
    CData/*0:0*/ adder4__DOT__fa3__DOT__s1;
    adder4__DOT__fa3__DOT__s1 = 0;
    CData/*0:0*/ adder4__DOT__fa4__DOT__s1;
    adder4__DOT__fa4__DOT__s1 = 0;
    // Body
    adder4__DOT__fa4__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                        ^ (IData)(vlSelf->b)) 
                                       >> 3U));
    adder4__DOT__fa3__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                        ^ (IData)(vlSelf->b)) 
                                       >> 2U));
    adder4__DOT__fa2__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                        ^ (IData)(vlSelf->b)) 
                                       >> 1U));
    adder4__DOT__fa1__DOT__s1 = (1U & ((IData)(vlSelf->a) 
                                       ^ (IData)(vlSelf->b)));
    adder4__DOT____Vcellout__fa1____pinNumber5 = (1U 
                                                  & (((IData)(adder4__DOT__fa1__DOT__s1) 
                                                      & (IData)(vlSelf->c_in)) 
                                                     ^ 
                                                     ((IData)(vlSelf->a) 
                                                      & (IData)(vlSelf->b))));
    adder4__DOT____Vcellout__fa2____pinNumber5 = (1U 
                                                  & (((IData)(adder4__DOT__fa2__DOT__s1) 
                                                      & (IData)(adder4__DOT____Vcellout__fa1____pinNumber5)) 
                                                     ^ 
                                                     (((IData)(vlSelf->a) 
                                                       & (IData)(vlSelf->b)) 
                                                      >> 1U)));
    adder4__DOT____Vcellout__fa3____pinNumber5 = (1U 
                                                  & (((IData)(adder4__DOT__fa3__DOT__s1) 
                                                      & (IData)(adder4__DOT____Vcellout__fa2____pinNumber5)) 
                                                     ^ 
                                                     (((IData)(vlSelf->a) 
                                                       & (IData)(vlSelf->b)) 
                                                      >> 2U)));
    vlSelf->c_out = (1U & (((IData)(adder4__DOT__fa4__DOT__s1) 
                            & (IData)(adder4__DOT____Vcellout__fa3____pinNumber5)) 
                           ^ (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                              >> 3U)));
    vlSelf->sum = ((((IData)(adder4__DOT__fa4__DOT__s1) 
                     ^ (IData)(adder4__DOT____Vcellout__fa3____pinNumber5)) 
                    << 3U) | ((((IData)(adder4__DOT__fa3__DOT__s1) 
                                ^ (IData)(adder4__DOT____Vcellout__fa2____pinNumber5)) 
                               << 2U) | ((((IData)(adder4__DOT__fa2__DOT__s1) 
                                           ^ (IData)(adder4__DOT____Vcellout__fa1____pinNumber5)) 
                                          << 1U) | 
                                         ((IData)(adder4__DOT__fa1__DOT__s1) 
                                          ^ (IData)(vlSelf->c_in)))));
}

void Vadder4___024root___eval_triggers__ico(Vadder4___024root* vlSelf);

bool Vadder4___024root___eval_phase__ico(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vadder4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vadder4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vadder4___024root___eval_act(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_act\n"); );
}

void Vadder4___024root___eval_nba(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_nba\n"); );
}

void Vadder4___024root___eval_triggers__act(Vadder4___024root* vlSelf);

bool Vadder4___024root___eval_phase__act(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vadder4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vadder4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vadder4___024root___eval_phase__nba(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vadder4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder4___024root___dump_triggers__ico(Vadder4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder4___024root___dump_triggers__nba(Vadder4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder4___024root___dump_triggers__act(Vadder4___024root* vlSelf);
#endif  // VL_DEBUG

void Vadder4___024root___eval(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vadder4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("adder4.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vadder4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vadder4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("adder4.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vadder4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("adder4.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vadder4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vadder4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vadder4___024root___eval_debug_assertions(Vadder4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vadder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
}
#endif  // VL_DEBUG
