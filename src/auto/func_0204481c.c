#include "m2c.h"

u32 func_0204481c(void *arg0) {
    s32 var_r1;
    u32 temp_r0;
    u32 var_r1_2;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r1 != 0) {
        var_r1 -= 4;
    }
    if (var_r1 == 0) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 8);
    if (temp_r0 & 1) {
        var_r1_2 = 0;
    } else {
        var_r1_2 = temp_r0;
    }
    if (var_r1_2 != 0) {
        return 4U;
    }
    return temp_r0 >> 1;
}
