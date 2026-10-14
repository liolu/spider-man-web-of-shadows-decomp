#include "m2c.h"

s32 func_0200e708(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = arg1 + 0x10 + M2C_FIELD((arg1 + (M2C_FIELD(arg0, s32 *, 8) * 2)), u16 *, 0x10);
    return arg2 +
           ((M2C_FIELD(temp_r3, u8 *, 1) + (M2C_FIELD(temp_r3, u8 *, 2) << 8) + (M2C_FIELD(temp_r3, u8 *, 3) << 0x10)) * 4);
}
