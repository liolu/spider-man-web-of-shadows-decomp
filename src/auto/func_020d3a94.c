#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0203f024(s32);                         /* extern */
M2C_UNK func_0210f6e4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern s32 data_02145c34;
extern s32 data_02149fb0;
extern M2C_UNK func_020d227c;

s32 func_020d3a94(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = data_02149fb0 - 1;
    data_02149fb0 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145c34;
        if (temp_r5 != 0) {
            func_0210f6e4(temp_r5 + 0x38, 0x31, 8, &func_020d227c);
            func_0203f024(temp_r5 + 0x28);
            func_02006188(temp_r5);
        }
        data_02145c34 = 0;
    }
    return arg0;
}
