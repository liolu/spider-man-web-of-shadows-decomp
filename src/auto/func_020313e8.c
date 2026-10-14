#include "m2c.h"

void func_020313e8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4)   = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, s32 *, 8)   = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
