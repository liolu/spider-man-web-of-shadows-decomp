#include "m2c.h"

extern M2C_UNK data_0212b2a0;

void func_02047d94(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212b2a0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
