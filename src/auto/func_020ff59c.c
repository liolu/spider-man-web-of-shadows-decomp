#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020ff3d0();
extern void func_020ff3e0();
extern char data_0214c180[];
extern char data_0214c184[];
extern char data_0214c188[];
extern char data_0214c1ac[];
// clang-format off
asm void func_020ff59c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0214c180
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_020ff3d0
    ldr r0, =data_0214c1ac
    ldr r1, =data_0214c184
    ldr r1, [r1, #0x0]
    ldr ip, =data_0214c188
    ldr ip, [ip, #0x0]
    ldr lr, =0x20ff5ec
    bx ip
    bl func_020ff3e0
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
