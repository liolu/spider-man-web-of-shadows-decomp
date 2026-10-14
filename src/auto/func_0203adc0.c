#include "m2c.h"

extern M2C_UNK data_0212a498;

void func_0203adc0(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212a498;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) *arg1;
}
