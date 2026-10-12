#include "m2c.h"

extern M2C_UNK data_0212accc;

void func_020473d8(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212accc;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
