#include "m2c.h"

M2C_UNK func_020d0ed4(void **, s32);                /* extern */
s32 func_020d520c();                                /* extern */

s32 func_020d51cc(void *arg0) {
    void *sp0;
    s32 var_r4;

    var_r4 = 0;
    if (func_020d520c() != 0) {
        func_020d0ed4(&sp0, M2C_FIELD(arg0, s32 *, 8));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20C) >= (s32) M2C_FIELD(sp0, s32 *, 8)) {
            var_r4 = 1;
        }
    }
    return var_r4;
}
