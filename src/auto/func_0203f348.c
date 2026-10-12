#include "m2c.h"

M2C_UNK func_0203d6a8(s32);                         /* extern */

void func_0203f348(void *arg0, s32 *arg1, s32 arg2) {
    func_0203d6a8(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) *arg1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
}
