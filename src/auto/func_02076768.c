#include "m2c.h"

extern M2C_UNK data_0212fcb4;

void func_02076768(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fcb4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
}
