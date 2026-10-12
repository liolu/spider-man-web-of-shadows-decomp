#include "m2c.h"

M2C_UNK func_0203fbd8(M2C_UNK, s32);                /* extern */
M2C_UNK func_021008a4(s32, s32);                    /* extern */
M2C_UNK func_021016e0(s32, s32, M2C_UNK);           /* extern */
s32 func_02101714(s32, s32);                        /* extern */

void func_0203f8ac(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, s32 *, 8);
    if ((temp_r3 != 0) && (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AC) - temp_r3);
        if (arg2 == func_02101714(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4))) {
            func_021016e0(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), 0);
        }
        func_021008a4(arg2, arg2 + M2C_FIELD(arg1, s32 *, 8));
        func_0203fbd8(2, arg2);
    }
}
