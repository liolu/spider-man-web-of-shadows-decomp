#include "m2c.h"

void *func_02008344(M2C_UNK);                       /* extern */
s32 func_02008a04(M2C_UNK);                         /* extern */

void func_02008c50(void *arg0, M2C_UNK arg1) {
    void *temp_r0;

    if (func_02008a04(arg1) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        return;
    }
    temp_r0 = func_02008344(arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
}
