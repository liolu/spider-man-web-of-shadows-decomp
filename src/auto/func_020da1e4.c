#include "m2c.h"

extern M2C_UNK data_0213aa28;

void func_020da1e4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213aa28;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 4);
}
