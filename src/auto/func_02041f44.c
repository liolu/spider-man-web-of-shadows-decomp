#include "m2c.h"

void func_02041f44(void **arg0) {
    s32 var_r0;
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(temp_r1, s32 *, 0x110) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x110) | 4);
    }
}
