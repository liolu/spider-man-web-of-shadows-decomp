#include "m2c.h"

extern M2C_UNK data_021341f4;

void func_020b1f44(s32 *arg0, void *arg1) {
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u32 *, 0x14);
    switch (temp_r2) {                              /* irregular */
    case 0x8:
    case 0x9:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x11:
        *arg0 = 0;
        return;
    case 0x7:
        *arg0 = -0x399;
        return;
    case 0xA:
        *arg0 = M2C_FIELD(&data_021341f4, s32 *, 0x278);
        return;
    case 0x1F:
    case 0x20:
    case 0x21:
        *arg0 = 0;
        return;
    case 0x3E:
    case 0x3D:
    case 0x3C:
    case 0x1D:
        *arg0 = 0;
        return;
    case 0x34:
        if ((M2C_FIELD(arg1, s32 *, 0x64) & 0x100000) && ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x44), s32 *, 0x1C) <= 0)) {
            *arg0 = 0;
            return;
        }
    default:
        *arg0 = 0x399;
        return;
    }
}
