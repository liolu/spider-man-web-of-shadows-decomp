#include "m2c.h"

s32 func_020c97cc(s32 arg0, u32 *arg1) {
    u32 temp_r0;

    temp_r0 = *arg1;
    switch (temp_r0) {                              /* irregular */
    case 0x3E:
    case 0x3D:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
        return 1;
    default:
        return 0;
    }
}
