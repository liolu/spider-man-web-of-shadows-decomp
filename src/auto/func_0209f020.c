#include "m2c.h"

void func_0209f020(void *arg0) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x70);
    if (temp_r1 & 1) {
        var_r1 = temp_r1 & ~1;
    } else {
        var_r1 = temp_r1 | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = var_r1;
}
