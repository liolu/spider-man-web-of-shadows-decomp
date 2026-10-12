#include "m2c.h"

s32 func_020e81b0(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_020e8268(void *, s32, M2C_UNK, s32);   /* extern */

void func_020e85fc(void *arg0) {
    s32 var_r4;
    s32 var_r9;

    var_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    var_r9 = 0;
    if (var_r4 > 0) {
        do {
            func_020e8268(arg0, var_r9 + 3, 0x17, func_020e81b0(arg0, 6, 2));
            var_r4 = M2C_FIELD(arg0, s32 *, 0x20);
            var_r9 += 1;
        } while (var_r9 < var_r4);
    }
    if (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        do {
            func_020e8268(arg0, var_r4 + 3, 0x17, func_020e81b0(arg0, 7, 2));
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_020e8268(arg0, M2C_FIELD(arg0, s32 *, 0x1C) + 3, 0x17, func_020e81b0(arg0, 8, 2));
    func_020e8268(arg0, M2C_FIELD(arg0, s32 *, 0x1C) + 4, 0x17, 0);
}
