#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02084cd0(s32);                         /* extern */
extern s32 data_02149e2c;
extern s32 data_02149fb8;

s32 func_020d370c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0       = data_02149fb8 - 1;
    data_02149fb8 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02149e2c;
        if (temp_r5 != 0) {
            func_02084cd0(temp_r5);
            func_02006188(temp_r5);
        }
        data_02149e2c = 0;
    }
    return arg0;
}
