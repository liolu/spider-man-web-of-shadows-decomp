
extern void func_020ff50c();
extern void func_020ff59c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020ff4f8(void) {
    stmfd sp!, {r0, lr}
    bl func_020ff50c
    bl func_020ff59c
    ldmfd sp!, {r0, lr}
    bx lr
}
