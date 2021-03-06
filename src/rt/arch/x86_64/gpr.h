// General-purpose registers. This structure is used during stack crawling.

#ifndef GPR_H
#define GPR_H

#include "rust_gpr_base.h"

class rust_gpr : public rust_gpr_base {
public:
    uintptr_t rax, rbx, rcx, rdx, rsi, rdi, rbp, rip;
    uintptr_t  r8,  r9, r10, r11, r12, r13, r14, r15;

    inline uintptr_t get_fp() { return rbp; }
    inline uintptr_t get_ip() { return rip; }

    inline void set_fp(uintptr_t new_fp) { rbp = new_fp; }
    inline void set_ip(uintptr_t new_ip) { rip = new_ip; }

    void load();
};

#endif

