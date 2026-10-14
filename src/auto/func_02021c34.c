#include "m2c.h"

M2C_UNK func_02021a04(void *, s32);                 /* extern */

void func_02021c34(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x80);
        if (temp_r0 > 0) {
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r0 - 0x1000);
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x80) > 0) && (arg2 == 0)) {
        return;
    }
    switch (arg1) {                                 /* irregular */
        case 4:
            func_02021a04(arg0, M2C_FIELD(arg0, s32 *, 0x88) + ((s32) M2C_FIELD(arg0, s32 *, 0x84) >> 0xC));
            break;
        case 5:
            func_02021a04(arg0, M2C_FIELD(arg0, s32 *, 0x88) - ((s32) M2C_FIELD(arg0, s32 *, 0x84) >> 0xC));
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(arg0, s32 *, 0x78));
}
