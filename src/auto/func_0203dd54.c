#include "m2c.h"

s32 func_0203d828(void *, s32, s32);                /* extern */
M2C_UNK func_0203dd98(void *, s32 *, void *);       /* extern */

s32 func_0203dd54(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r0;

    M2C_FIELD(arg0, s8 *, 4) = 0;
    temp_r0 = func_0203d828(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8));
    sp0 = temp_r0;
    if (temp_r0 == 0) {
        return 0;
    }
    func_0203dd98(arg0, &sp0, arg1);
    return 1;
}
