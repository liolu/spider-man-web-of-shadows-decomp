#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210d874(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210d8dc
    cmn ip, r3, lsl #0x1
    bhs L_0210d8f0
L_0210d888:
    orrs ip, r3, r1
    bmi L_0210d8b8
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0210d8a4:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0210d8b8:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0210d8dc:
    bne L_0210d8a4
    cmp r0, #0x0
    bhi L_0210d8a4
    cmn ip, r3, lsl #0x1
    blo L_0210d888
L_0210d8f0:
    bne L_0210d8a4
    cmp r2, #0x0
    bhi L_0210d8a4
    b L_0210d888
}
// clang-format on
