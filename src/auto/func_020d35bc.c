#include "m2c.h"

M2C_UNK func_01ffa190(s32);                         /* extern */
M2C_UNK func_02006188(s32);                         /* extern */
extern s32 data_02145be8;
extern s32 data_02149f9c;

s32 func_020d35bc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0       = data_02149f9c - 1;
    data_02149f9c = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145be8;
        if (temp_r5 != 0) {
            func_01ffa190(temp_r5);
            func_02006188(temp_r5);
        }
        data_02145be8 = 0;
    }
    return arg0;
}
