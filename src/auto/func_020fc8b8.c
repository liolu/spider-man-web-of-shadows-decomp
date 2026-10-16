/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020653a8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern void func_021000d8(const void *src, void *dest);
s32 func_020fc8b8(void *dest) {
    if ((*(vu32 *) 0x04000600) & 0x8000000) {
        return -1;
    }
    func_021000d8((const void *) 0x04000640, dest);
    return 0;
}
