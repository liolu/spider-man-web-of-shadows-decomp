#include "m2c.h"

extern M2C_UNK data_0212fd08;

void func_020765b8(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fd08;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
