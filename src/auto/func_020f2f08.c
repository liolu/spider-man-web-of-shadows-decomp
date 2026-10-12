#include "m2c.h"

void func_020f2f08(s32 *arg0, void *arg1) {
    s32 *var_r1;

    if (M2C_FIELD(arg1, s32 *, 0xC) == 0) {
        var_r1 = arg1 + 4;
    } else {
        var_r1 = arg1 + 8;
    }
    *arg0 = *var_r1;
}
