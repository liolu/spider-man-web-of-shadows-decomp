/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
// clang-format on

/* func_020798f4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_protection.c (license: none), reused
 * by tools/donor_match.py */
// clang-format off
asm void func_020ff3f0(register u32 clearBits, register u32 setBits) {
    mrc     p15, 0, r2, c5, c0, 2
    bic     r2, r2, r0
    orr     r2, r2, r1
    mcr     p15, 0, r2, c5, c0, 2
    bx      lr
}
