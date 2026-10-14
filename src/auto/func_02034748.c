#include "m2c.h"

extern M2C_UNK data_02129844;

void func_02034748(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02129844;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) *arg1;
}
