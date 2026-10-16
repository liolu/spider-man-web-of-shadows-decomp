/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200285c from projets/farm-frenzy/src/donor/func_0200285c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
extern u16 data_0214be3e;
extern void func_020ff990(u16 bank, u16 lockId);
s32 func_020fbe68(u16 *bank) {
    s32 vram = *bank;
    *bank    = 0;

    if (vram & 0x001) {
        (*(vu8 *) 0x04000240) = 0;
    }
    if (vram & 0x002) {
        (*(vu8 *) 0x04000241) = 0;
    }
    if (vram & 0x004) {
        (*(vu8 *) 0x04000242) = 0;
    }
    if (vram & 0x008) {
        (*(vu8 *) 0x04000243) = 0;
    }
    if (vram & 0x010) {
        (*(vu8 *) 0x04000244) = 0;
    }
    if (vram & 0x020) {
        (*(vu8 *) 0x04000245) = 0;
    }
    if (vram & 0x040) {
        (*(vu8 *) 0x04000246) = 0;
    }
    if (vram & 0x080) {
        (*(vu8 *) 0x04000248) = 0;
    }
    if (vram & 0x100) {
        (*(vu8 *) 0x04000249) = 0;
    }
    func_020ff990((u16) vram, data_0214be3e);
    return vram;
}
