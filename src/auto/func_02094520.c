#include "m2c.h"

s32 func_02094520(void *arg0) {
    s32 var_r0;
    u32 temp_r3;

    var_r0 = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14) - 6;
    if (temp_r3 > 0x11U) {
        return 0;
    }
    if (0x30001 & (1 << temp_r3)) {
        var_r0 = 1;
    }
    return var_r0;
}
