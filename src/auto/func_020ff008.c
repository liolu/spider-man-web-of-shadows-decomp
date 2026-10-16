/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02079230 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/init.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020ff008(void) {
    mov     r12, #0x4000000
    ldr     r1, [r12, #0x208]
    str     r12, [r12, #0x208]
loop:
    ldrh    r0, [r12, #0x6]
    cmp     r0, #0x0
    bne     loop
    str     r1, [r12, #0x208]
    bx      lr
}
// clang-format on
