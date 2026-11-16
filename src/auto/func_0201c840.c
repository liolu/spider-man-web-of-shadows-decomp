/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_01ff894c(void *, void *, s32, s32);        /* extern */

s32 func_0201c840(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x58) == 0) {
        return 0;
    }
    temp_r0 = func_01ff894c(arg0 + 0x40, arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, s32 *, 0x4C));
    M2C_FIELD(arg0, s32 *, 0x6C) = temp_r0;
    if (temp_r0 <= 0) {
        return 0;
    }
    return 1;
}
