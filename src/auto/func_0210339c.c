#include "m2c.h"

M2C_UNK func_02102e08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02106678();                                /* extern */

void func_0210339c(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_02106678() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_02102e08(arg0, var_r1);
}
