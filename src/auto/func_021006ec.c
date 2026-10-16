/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207a478 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_interface.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_0210095c(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern void func_02101140(s32 no);
void func_021006ec(u32 arg0, u32 arg1, u32 alarmMask, u32 arg3) {
    s32 i;
    u32 mask = alarmMask;

    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_02101140(i);
        }
    }
    func_0210095c(13, arg0, arg1, alarmMask, arg3);
}
void func_0210095c(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
