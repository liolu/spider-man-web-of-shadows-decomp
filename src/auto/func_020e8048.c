#include "m2c.h"

s32 func_020e81b0(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_020e8268(M2C_UNK, s32, s32, s32);      /* extern */

void func_020e8048(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s32 var_r5;
    s32 var_r6;

    if (arg3 != 0) {
        var_r0 = 0;
    } else {
        var_r0 = 2;
    }
    if (arg2 <= 0) {
        var_r1 = 4;
    } else {
        var_r1 = 0;
    }
    temp_r4 = var_r1 + (var_r0 + (arg2 * 4));
    if (arg2 <= 0) {
        var_r6 = 4;
    } else {
        var_r6 = 0;
    }
    var_r5 = 0;
    do {
        func_020e8268(arg0, M2C_FIELD(arg1, s32 *, 0) + var_r5, M2C_FIELD(arg1, s32 *, 4), func_020e81b0(arg0, var_r6 + var_r5, temp_r4));
        func_020e8268(arg0, M2C_FIELD(arg1, s32 *, 0) + var_r5, M2C_FIELD(arg1, s32 *, 4) + 1, func_020e81b0(arg0, var_r6 + var_r5, temp_r4 + 1));
        var_r5 += 1;
    } while (var_r5 < 0xA);
}
