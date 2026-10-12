#include "m2c.h"

s32 func_0200aa10();                                /* extern */
s32 func_0200aa20(u16 *);                           /* extern */

s32 func_0200a9d4(u16 *arg0) {
    s32 temp_r4;
    s32 var_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r4 = func_0200aa10();
    var_r0 = temp_r4 + func_0200aa20(arg0);
    if (((u32) (*arg0 << 0x1B) >> 0x1D) == 1) {
        var_r0 += 8;
    }
    return var_r0;
}
