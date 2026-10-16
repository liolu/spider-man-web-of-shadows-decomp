/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02103634 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/cp/cp_context.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkCPContext {
    u32 unk_00[4];
    u32 unk_10[2];
    u16 unk_18;
    u16 unk_1a;
} UnkCPContext;
// clang-format off
asm void func_02103634(register const UnkCPContext* context) {
    stmdb   sp!, {r4}
    ldr     r1, =0x04000290
    ldmia   r0, {r2, r3, r4, r12}
    stmia   r1, {r2, r3, r4, r12}
    ldrh    r2, [r0, #0x18]
    ldrh    r3, [r0, #0x1a]
    strh    r2, [r1, #-0x10]
    strh    r3, [r1, #0x20]
    add     r0, r0, #0x10
    add     r1, r1, #0x28
    ldmia   r0, {r2, r3}
    stmia   r1, {r2, r3}
    ldmia   sp!, {r4}
    bx      lr
}
// clang-format on
