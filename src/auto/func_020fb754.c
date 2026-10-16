/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForTex from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
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
void func_020fb754(s32 tex) {
    data_0214be40.lcdc = ~tex & (data_0214be40.lcdc | data_0214be40.tex);
    data_0214be40.tex  = tex;

    if (tex == 0) {
        (*(vu16 *) 0x04000060) &= (u16) ~(1 | 0x1000 | 0x2000);
    } else {
        (*(vu16 *) 0x04000060) = (u16) (((*(vu16 *) 0x04000060) & ~(0x1000 | 0x2000)) | 1);

        switch (tex) {
            case 0x05:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000242) = 0x8b;
                break;
            case 0x09:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000243) = 0x8b;
                break;
            case 0x0a:
                (*(vu8 *) 0x04000241) = 0x83;
                (*(vu8 *) 0x04000243) = 0x8b;
                break;
            case 0x0b:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000241) = 0x8b;
                (*(vu8 *) 0x04000243) = 0x93;
                break;
            case 0x0d:
                (*(vu8 *) 0x04000240) = 0x83;
                (*(vu8 *) 0x04000242) = 0x8b;
                (*(vu8 *) 0x04000243) = 0x93;
                break;
            case 0x08:
                (*(vu8 *) 0x04000243) = 0x83;
                break;
            case 0x0c:
                (*(vu8 *) 0x04000243) = 0x8b;
            case 0x04:
                (*(vu8 *) 0x04000242) = 0x83;
                break;
            case 0x0e:
                (*(vu8 *) 0x04000243) = 0x93;
            case 0x06:
                (*(vu8 *) 0x04000242) = 0x8b;
            case 0x02:
                (*(vu8 *) 0x04000241) = 0x83;
                break;
            case 0x0f:
                (*(vu8 *) 0x04000243) = 0x9b;
            case 0x07:
                (*(vu8 *) 0x04000242) = 0x93;
            case 0x03:
                (*(vu8 *) 0x04000241) = 0x8b;
            case 0x01:
                (*(vu8 *) 0x04000240) = 0x83;
                break;
            default:
                break;
        }
    }
    func_020faebc(data_0214be40.lcdc);
}
