/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021035f4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/cp/cp_context.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkCPContext {
    u32 unk_00[4];
    u32 unk_10[2];
    u16 unk_18;
    u16 unk_1a;
} UnkCPContext;
// clang-format off
asm void func_021035f4(register UnkCPContext* context) {
    ldr     r1, =0x04000290
    stmdb   sp!, {r4}
    ldmia   r1, {r2, r3, r4, r12}
    stmia   r0!, {r2, r3, r4, r12}
    ldrh    r12, [r1, #-0x10]
    add     r1, r1, #0x28
    ldmia   r1, {r2, r3}
    stmia   r0!, {r2, r3}
    and     r12, r12, #3
    ldrh    r2, [r1, #-0x8]
    strh    r12, [r0]
    and     r2, r2, #1
    strh    r2, [r0, #2]
    ldmia   sp!, {r4}
    bx      lr
}
// clang-format on
