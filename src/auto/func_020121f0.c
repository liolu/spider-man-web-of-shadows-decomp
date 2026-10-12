#include "m2c.h"

u32 func_020fc0cc();                                /* extern */
u32 func_020fc114();                                /* extern */

s32 func_020121f0(s32 arg0) {
    s32 var_r1;
    u32 var_r0;

    if (arg0 == 0) {
        var_r0 = func_020fc0cc();
    } else {
        var_r0 = func_020fc114();
    }
    if (var_r0 <= 0x4000U) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    return 0x400 >> var_r1;
}
