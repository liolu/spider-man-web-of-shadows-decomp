#include "m2c.h"

M2C_UNK func_020f3a9c(void *, s32, s32, M2C_UNK, s32); /* extern */

void *func_020f410c(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_020f3a9c(arg0, 0x46524D48, arg0 + 0x30, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
