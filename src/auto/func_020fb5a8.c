/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForBgExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0214be40;
extern UnkGxVramState data_0214be40;
void func_020faebc(u32 lcdc);
void func_020fb5a8(s32 bgExtPltt) {
    data_0214be40.lcdc      = ~bgExtPltt & (data_0214be40.lcdc | data_0214be40.bgExtPltt);
    data_0214be40.bgExtPltt = bgExtPltt;

    switch (bgExtPltt) {
        case 0x10:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000244) = 0x84;
            break;
        case 0x40:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000246) = 0x8c;
            break;
        case 0x60:
            (*(vu8 *) 0x04000246) = 0x8c;
        case 0x20:
            (*(vu8 *) 0x04000245) = 0x84;
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x40000000;
            break;
        case 0x00:
            (*(u32 *) ((0x04000000) | 0x0)) &= ~0x40000000;
            break;
        default:
            break;
    }
    func_020faebc(data_0214be40.lcdc);
}
