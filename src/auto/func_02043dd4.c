#include "m2c.h"

M2C_UNK func_02043c18(void *, s32);                 /* extern */
M2C_UNK func_02043d70(void *, void *, s32);         /* extern */

void func_02043dd4(void *arg0, void *arg1) {
    s32 temp_r2;
    u32 temp_r3;

    temp_r2 = 1 << M2C_FIELD(arg1, s32 *, 0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) (temp_r2 * M2C_FIELD(arg0, s32 *, 0xC))) {
        func_02043c18(arg0 + 4, temp_r2 * M2C_FIELD(arg1, s32 *, 4));
    }
    temp_r3 = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r3;
    func_02043d70(arg0, arg1, temp_r3 - 1);
}
