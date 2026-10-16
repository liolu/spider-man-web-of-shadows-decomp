/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002da0 from projets/farm-frenzy/src/donor/func_02002da0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern s32 func_020fca10(s32 *level);
s32 func_020fca10(s32 *level) {
    if ((*(vu32 *) 0x04000600) & 0x4000) {
        return -1;
    }
    *level = ((*(vu32 *) 0x04000600) & 0x2000) >> 13;
    return 0;
}
