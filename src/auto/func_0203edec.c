#include "m2c.h"

s32 func_020403f8(M2C_UNK);                         /* extern */

void func_0203edec(s32 *arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_020403f8(arg1);
    if (var_r0 <= -1) {
        var_r0 = 0x16;
    }
    *arg0 = var_r0;
}
