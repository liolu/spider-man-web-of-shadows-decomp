#include "m2c.h"

s32 func_02022be0();                                /* extern */

s32 func_02016b30(void) {
    s32 var_r0;

    var_r0 = func_02022be0() - 3;
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return var_r0;
}
