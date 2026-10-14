#include "m2c.h"

M2C_UNK func_020f3878(void *, s32);                 /* extern */
s32 func_020f428c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020f90fc();                            /* extern */

s32 func_020f9140(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020f428c(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020f90fc();
    func_020f3878(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
