#include "m2c.h"

void *func_02008344(M2C_UNK);                       /* extern */
s32 func_02008a04();                                /* extern */

void func_0200886c(M2C_UNK arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;

    if (func_02008a04() == 0) {
        return;
    }
    temp_r0                        = func_02008344(arg0);
    M2C_FIELD(temp_r0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_r0_2                      = func_02008344(arg0);
    M2C_FIELD(temp_r0_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 4) | 4);
}
