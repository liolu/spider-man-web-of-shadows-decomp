/* func_020fffd0 from projets/powerpuff-girls-z/src/donor/func_020fffd0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
asm void func_020fffd0(void) {
    add ip, r1, r2
L_02000934:
    cmp r1, ip
    stmltia r1!, {r0}
    blt L_02000934
    bx lr
}
// clang-format on
