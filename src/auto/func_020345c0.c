#include "m2c.h"

extern M2C_UNK data_02129898;

void func_020345c0(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02129898;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
