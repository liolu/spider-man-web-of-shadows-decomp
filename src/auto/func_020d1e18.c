#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0201467c(s32);                         /* extern */
extern s32 data_0213fe48;
extern s32 data_02149f94;

s32 func_020d1e18(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = data_02149f94 - 1;
    data_02149f94 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_0213fe48;
        if (temp_r5 != 0) {
            func_0201467c(temp_r5);
            func_02006188(temp_r5);
        }
        data_0213fe48 = 0;
    }
    return arg0;
}
