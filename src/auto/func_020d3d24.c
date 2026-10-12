#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
extern s32 data_02149c88;
extern s32 data_02149fc4;

s32 func_020d3d24(s32 arg0) {
    s32 temp_r0;

    temp_r0 = data_02149fc4 - 1;
    data_02149fc4 = temp_r0;
    if (temp_r0 == 0) {
        func_02006188(data_02149c88);
        data_02149c88 = 0;
    }
    return arg0;
}
