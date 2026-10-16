/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef struct UnkContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    u8 cp_context[0x1c];
} UnkContext;
// clang-format on

/* func_02078c44 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_context.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020feb94(register UnkContext* context, register u32 newpc, register u32 newsp) {
    add     r1, r1, #4
    str     r1, [r0, #0x40]
    str     r2, [r0, #0x44]
    sub     r2, r2, #0x40
    tst     r2, #4
    subne   r2, r2, #4
    str     r2, [r0, #0x38]
    ands    r1, r1, #1
    movne   r1, #0x3f
    moveq   r1, #0x1f
    str     r1, [r0]
    mov     r1, #0
    str     r1, [r0, #0x4]
    str     r1, [r0, #0x8]
    str     r1, [r0, #0xc]
    str     r1, [r0, #0x10]
    str     r1, [r0, #0x14]
    str     r1, [r0, #0x18]
    str     r1, [r0, #0x1c]
    str     r1, [r0, #0x20]
    str     r1, [r0, #0x24]
    str     r1, [r0, #0x28]
    str     r1, [r0, #0x2c]
    str     r1, [r0, #0x30]
    str     r1, [r0, #0x34]
    str     r1, [r0, #0x3c]
    bx      lr
}
