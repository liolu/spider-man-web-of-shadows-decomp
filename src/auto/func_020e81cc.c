#include "m2c.h"

M2C_UNK func_02008d34(s32, s32, s32, s32);          /* extern */
s32 func_020e81b0(s32, s32, s32);                   /* extern */

void func_020e81cc(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r2;
    s32 var_r6;
    s32 var_r7;

    var_r2 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg1, s32 *, 0);
    if (var_r2 < 0) {
        var_r2 = 0 - var_r2;
    }
    temp_r4 = var_r2 + 1;
    var_r0  = M2C_FIELD(arg1, s32 *, 0xC) - M2C_FIELD(arg1, s32 *, 4);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    temp_r5 = var_r0 + 1;
    var_r6  = 0;
    if (temp_r4 <= 0) {
        return;
    }
    do {
        var_r7 = 0;
        if (temp_r5 > 0) {
            do {
                func_02008d34(arg0 + 4, M2C_FIELD(arg1, s32 *, 0) + var_r6, M2C_FIELD(arg1, s32 *, 4) + var_r7,
                              func_020e81b0(arg0, M2C_FIELD(arg2, s32 *, 0) + var_r6, M2C_FIELD(arg2, s32 *, 4) + var_r7));
                var_r7 += 1;
            } while (var_r7 < temp_r5);
        }
        var_r6 += 1;
    } while (var_r6 < temp_r4);
}
