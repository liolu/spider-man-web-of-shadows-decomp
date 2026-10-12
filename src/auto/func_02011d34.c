#include "m2c.h"

M2C_UNK func_020120f4(void *);                      /* extern */
M2C_UNK func_02107808(s32, M2C_UNK, s32);           /* extern */

void func_02011d34(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - arg2;
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    if ((var_r0 >= 8) || (((s32) M2C_FIELD(arg0, s32 *, 0x20) >> 3) != (arg3 >> 3))) {
        func_020120f4(arg0);
        func_02107808(M2C_FIELD(arg0, s32 *, 0x2C), 0, M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg2 & (M2C_FIELD(arg0, s32 *, 0x10) - 1));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg3 & 0x1F);
}
