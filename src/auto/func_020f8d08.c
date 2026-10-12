#include "m2c.h"

extern M2C_UNK data_0214b834;

void func_020f8d08(s32 arg0) {
    M2C_FIELD(&data_0214b834, s32 *, 4) = (s32) (M2C_FIELD(&data_0214b834, s32 *, 4) & ~(1 << arg0));
}
