#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02084efc(s32);                         /* extern */
extern s32 data_02145c40;
extern s32 data_02149fa0;

s32 func_020d39ec(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = data_02149fa0 - 1;
    data_02149fa0 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145c40;
        if (temp_r5 != 0) {
            func_02084efc(temp_r5);
            func_02006188(temp_r5);
        }
        data_02145c40 = 0;
    }
    return arg0;
}
