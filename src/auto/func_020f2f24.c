#include "m2c.h"

void func_020f2f24(s32 *arg0, void *arg1, s32 arg2) {
    s32 var_r1;

    if (M2C_FIELD(arg1, u8 *, 0x20) != 0) {
        *arg0 = M2C_FIELD(arg1, s32 *, 0x1C);
        return;
    }
    if (arg2 >= 2) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    *arg0 = var_r1;
}
