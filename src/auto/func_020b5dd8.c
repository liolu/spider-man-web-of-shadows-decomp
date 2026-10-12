#include "m2c.h"

s32 func_020b5dd8(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 0x25) {
        if ((s32) M2C_FIELD(arg0, s32 *, 8) > 4) {
            var_r0 = 0x7FFFFFFF;
        } else {
            var_r0 = 0x25;
        }
        return var_r0;
    }
    return 0x7FFFFFFF;
}
