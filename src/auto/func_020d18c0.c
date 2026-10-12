#include "m2c.h"

s32 *func_02043bb8(s32, M2C_UNK);                   /* extern */

void func_020d18c0(void *arg0, s32 arg1) {
    s32 *temp_r0;

    temp_r0 = func_02043bb8(arg1 + 4, 0);
    M2C_FIELD(arg0, s32 **, 0) = temp_r0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *temp_r0;
}
