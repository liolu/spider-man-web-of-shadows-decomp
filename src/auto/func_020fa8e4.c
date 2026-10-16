/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_InvAsync from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_division.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
extern void func_020fa8e4(s32 denom);
void func_020fa8e4(s32 denom) {
    (*(vu16 *) 0x04000280) = 1;
    (*(vu64 *) 0x04000290) = 0x1000LL << 32;
    (*(vu64 *) 0x04000298) = (u32) denom;
}
