#include "m2c.h"

M2C_UNK func_0200996c(void *);                      /* extern */
M2C_UNK func_02009a48(void *, s32, s32);            /* extern */
M2C_UNK func_02107808(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020093f0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r8;

    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    var_r0 = M2C_FIELD(arg0, s32 *, 8) - arg2;
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    if ((var_r0 >= 8) || (((s32) M2C_FIELD(arg0, s32 *, 0xC) >> 3) != (arg3 >> 3))) {
        var_r8 = 1;
    } else {
        var_r8 = 0;
    }
    if (var_r8 != 0) {
        func_02009a48(arg0, M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x34));
    }
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    if (var_r8 != 0) {
        if (arg1 == 0xFF) {
            func_0200996c(arg0);
        } else {
            func_02107808(arg0 + 0x38, 0, 0x200);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg2 & 7);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg3 & 7);
}
