#include "m2c.h"

M2C_UNK func_020084ec(s32, s32);                    /* extern */

void func_020091d4(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    do {
        var_r5 = 0;
    loop_2:
        func_020084ec(var_r6, var_r5);
        var_r5 += 1;
        if (var_r5 < 4) {
            goto loop_2;
        }
        var_r6 += 1;
    } while (var_r6 < 2);
}
