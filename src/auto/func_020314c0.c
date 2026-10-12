#include "m2c.h"

void func_020314c0(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) *arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}
