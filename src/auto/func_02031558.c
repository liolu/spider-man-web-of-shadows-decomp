#include "m2c.h"

void func_02031558(void *arg0, void **arg1) {
    void *temp_r3;

    temp_r3                     = *arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) (temp_r3 + 0x14 + M2C_FIELD(temp_r3, u16 *, 0xC));
    M2C_FIELD(arg0, s32 *, 4)   = 0;
}
