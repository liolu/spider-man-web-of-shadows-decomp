#include "m2c.h"

void *func_02008344(M2C_UNK);                       /* extern */
s32 func_02008a04();                                /* extern */

void func_02008830(M2C_UNK arg0, s8 arg1) {
    void *temp_r0;

    if (func_02008a04() == 0) {
        return;
    }
    temp_r0                                    = func_02008344(arg0);
    M2C_FIELD(temp_r0, s32 *, 0x34)            = (s32) (M2C_FIELD(temp_r0, s32 *, 0x34) | 8);
    M2C_FIELD(func_02008344(arg0), s8 *, 0x10) = arg1;
}
