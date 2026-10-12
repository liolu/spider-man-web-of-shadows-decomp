#include "m2c.h"

s32 *func_02043bb8(void *, u32);                    /* extern */

void func_020d18e4(void *arg0, u32 *arg1) {
    s32 *temp_r0;
    u32 temp_r4;

    temp_r4 = *arg1;
    temp_r0 = func_02043bb8(((s8 *)arg1 + 4), temp_r4 >> 3);
    M2C_FIELD(arg0, s32 **, 0) = temp_r0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (*temp_r0 + ((u32) (temp_r4 << 0x1D) >> 0x1B));
}
