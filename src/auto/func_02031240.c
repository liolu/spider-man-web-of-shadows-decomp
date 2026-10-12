#include "m2c.h"

void func_02031240(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8)), u8 *, 4));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
