#include "m2c.h"

s32 *func_02074d78(s32);                            /* extern */

s32 func_020b753c(void *arg0) {
    s32 var_r0;

    if (((u32) (M2C_FIELD(arg0, s32 *, 0x14) - 0x13) <= 1U) && (*func_02074d78(M2C_FIELD(arg0, s32 *, 0x44)) != 0x26) && (*func_02074d78(M2C_FIELD(arg0, s32 *, 0x44)) != 0x9C)) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x14);
        if (var_r0 != 0x14) {
            return var_r0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) >= 2) {
            var_r0 = 0x13;
        }
        return var_r0;
    }
    return 0x7FFFFFFF;
}
