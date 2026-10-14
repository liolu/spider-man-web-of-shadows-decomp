#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_020d1af0(s32);                         /* extern */
extern s32 data_021458e4;
extern s32 data_02149fc0;

s32 func_020d3664(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0       = data_02149fc0 - 1;
    data_02149fc0 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_021458e4;
        if (temp_r5 != 0) {
            func_020d1af0(temp_r5);
            func_02006188(temp_r5);
        }
        data_021458e4 = 0;
    }
    return arg0;
}
