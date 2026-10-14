#include "m2c.h"

extern M2C_UNK data_02129860;

void func_020346e4(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02129860;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) *arg1;
}
