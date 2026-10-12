#include "m2c.h"

s32 func_02016570(M2C_UNK);                         /* extern */
s32 func_0201d658(M2C_UNK);                         /* extern */
M2C_UNK func_020f58e4(s32, s32);                    /* extern */

void func_020164fc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0201d658(arg1);
    temp_r0 = func_02016570(arg0);
    if ((temp_r0 != 0) && (temp_r4 != 0)) {
        func_020f58e4(temp_r0, temp_r4);
    }
}
