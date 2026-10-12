#include "m2c.h"

s32 func_02081c68();                                /* extern */

s32 func_020814a0(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    if (func_02081c68() == 0) {
        return 1;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    if (var_r0 == 0) {
        return 0;
    }
    var_r0_2 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (var_r0_2 != 0) {
        var_r0_2 -= 4;
    }
    if (var_r0_2 == 0) {
        return 0;
    }
    return 1;
}
