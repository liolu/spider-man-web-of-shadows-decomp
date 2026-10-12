#include "m2c.h"

M2C_UNK func_0200ccbc(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200cd18(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0200cd80();                                /* extern */

s32 func_0200cdec(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0200cd80();
    if (temp_r0_2 != 0xFF) {
        return temp_r0_2;
    }
    temp_r0 = func_0200cd18(arg0, arg1);
    if (temp_r0 != 0xFF) {
        return temp_r0;
    }
    func_0200ccbc(arg0, arg1);
    return 2;
}
