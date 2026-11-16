/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0201226c(s32);                         /* extern */
M2C_UNK func_02012638(s32, s32);                    /* extern */
extern M2C_UNK data_02145600;

void func_0201222c(void) {
    s32 var_r7;

    var_r7 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_02145600 + (var_r7 * 4))) = -1;
        func_02012638(0, var_r7);
        func_0201226c(var_r7);
        var_r7 += 1;
    } while (var_r7 < 2);
}
