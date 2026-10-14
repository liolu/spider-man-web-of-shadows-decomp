#include "m2c.h"

extern M2C_UNK data_0212ba24;

void func_0204bd3c(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = &data_0212ba24;
    M2C_FIELD(arg1, s32 *, 4)      = (s32) M2C_FIELD(arg0, s32 *, 4);
}
