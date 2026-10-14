#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0203c850(s32);                         /* extern */
extern s32 data_02145c38;
extern s32 data_02149fa4;

s32 func_020d3944(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0       = data_02149fa4 - 1;
    data_02149fa4 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145c38;
        if (temp_r5 != 0) {
            func_0203c850(temp_r5);
            func_02006188(temp_r5);
        }
        data_02145c38 = 0;
    }
    return arg0;
}
