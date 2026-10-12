#include "m2c.h"

extern M2C_UNK data_0212ba24;

void func_02049540(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212ba24;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
