#include "m2c.h"

void func_0207b2a4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14) + 1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r1;
    if (temp_r1 >= 4) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}
