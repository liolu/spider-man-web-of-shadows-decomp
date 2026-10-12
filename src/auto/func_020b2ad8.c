#include "m2c.h"

s32 func_020c983c(void *, s32 *);                   /* extern */

s32 func_020b2ad8(void *arg0) {
    s32 sp0;
    s32 var_r4;

    var_r4 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x1C) > 0) {
        sp0 = M2C_FIELD(arg0, s32 *, 0x14);
        if (func_020c983c(arg0, &sp0) != 0) {
            var_r4 = 1;
        }
    }
    if (var_r4 == 0) {
        return 1;
    }
    return 0;
}
