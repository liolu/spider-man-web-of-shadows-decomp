#include "m2c.h"

M2C_UNK func_02013128(s32);                         /* extern */
M2C_UNK func_02017058(s32, s32);                    /* extern */

void func_02013bb8(s32 *arg0) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r5 = ((s8 *) arg0 + 0xC);
    var_r4 = 0;
    do {
        temp_r0 = *arg0;
        if (temp_r0 != 0) {
            func_02017058(temp_r0, var_r5);
        }
        func_02013128(var_r5);
        var_r4 += 1;
        var_r5 += 0x78;
    } while (var_r4 < 2);
}
