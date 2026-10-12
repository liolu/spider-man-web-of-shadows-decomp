#include "m2c.h"

M2C_UNK func_0203d5e4(M2C_UNK, u32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0203d5b8(M2C_UNK arg0, u32 *arg1, s32 arg2) {
    u32 temp_r1;

    temp_r1 = *arg1;
    if (temp_r1 >= 0x246U) {
        return;
    }
    func_0203d5e4(arg0, temp_r1, 0x14, 0, arg2);
}
