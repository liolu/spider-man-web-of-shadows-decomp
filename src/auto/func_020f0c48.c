#include "m2c.h"

M2C_UNK func_020f0c80(void *, s32, s32);            /* extern */
M2C_UNK func_020f1bf4(void *);                      /* extern */

void func_020f0c48(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_020f0c80(arg0, var_r4, var_r4 + M2C_FIELD(arg0, s32 *, 0x108));
        var_r4 += 1;
    } while (var_r4 < 4);
    func_020f1bf4(arg0);
}
