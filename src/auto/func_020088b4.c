#include "m2c.h"

void *func_02008344(M2C_UNK);                       /* extern */
s32 func_02008a04();                                /* extern */

void func_020088b4(M2C_UNK arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    void *temp_r0;

    if (func_02008a04() == 0) {
        return;
    }
    temp_r4 = (s32) M2C_FIELD(arg1, s32 *, 0) >> 0xC;
    M2C_FIELD(func_02008344(arg0), s16 *, 0x1E) = (s16) temp_r4;
    temp_r4_2 = (s32) M2C_FIELD(arg1, s32 *, 4) >> 0xC;
    M2C_FIELD(func_02008344(arg0), s16 *, 0x20) = (s16) temp_r4_2;
    temp_r0 = func_02008344(arg0);
    M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) | 1);
}
