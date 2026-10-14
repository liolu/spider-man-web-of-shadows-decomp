#include "m2c.h"

s32 func_020e68d8(s32 arg0, s32 arg1) {
    s32 var_r0;
    u32 temp_r2;

    temp_r2 = arg1 - 4;
    var_r0  = 1;
    if (temp_r2 > 0xBU) {
        return 1;
    }
    if (0x803 & (1 << temp_r2)) {
        var_r0 = 0;
    }
    return var_r0;
}
