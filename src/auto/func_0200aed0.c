#include "m2c.h"

s32 func_0200aed0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = arg0;
    if (arg1 & 1) {
        return var_r0 - ((s32) (arg2 + 1) >> 1);
    }
    if (arg1 & 2) {
        var_r0 -= arg2;
    }
    return var_r0;
}
