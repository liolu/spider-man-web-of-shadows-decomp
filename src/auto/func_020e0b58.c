#include "m2c.h"

M2C_UNK func_020e83c0(s32, s32);                    /* extern */
M2C_UNK func_020e85c8(s32, s32);                    /* extern */
M2C_UNK func_020e8e70(s32, s32);                    /* extern */
extern s32 data_02145c5c;

void func_020e0b58(s32 arg0) {
    s32 temp_r4;

    temp_r4 = data_02145c5c;
    func_020e8e70(arg0 + 0x1B0, temp_r4);
    func_020e83c0(arg0 + 0xF0, temp_r4);
    func_020e85c8(arg0 + 0x18C, temp_r4);
}
