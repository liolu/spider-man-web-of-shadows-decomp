#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0210f6e4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02035f04;

s32 *func_02035f2c(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_0210f6e4(temp_r4, 2, 8, &func_02035f04);
        func_02006188(temp_r4);
    }
    return arg0;
}
