#include "m2c.h"

s32 func_02027f88();                                /* extern */

s32 func_02027ff8(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = func_02027f88();
    if (var_r0 == 0) {
        var_r0 = arg1 + 2;
    }
    return var_r0;
}
