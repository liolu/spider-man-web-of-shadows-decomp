#include "m2c.h"

s32 func_02027f88(void *, s32);                     /* extern */
M2C_UNK func_02029120(void *, s32 *, s32);          /* extern */

void func_02029020(void *arg0, void *arg1, void *arg2) {
    s16 temp_r1;
    s32 temp_r0;
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3 = *M2C_FIELD(arg0, s32 **, 4);
    temp_r0 = func_02027f88(arg2, temp_r3 + M2C_FIELD((temp_r3 + (M2C_FIELD(arg1, u16 *, 0xA) * 4)), s32 *, 0x14));
    if (temp_r0 == 0) {
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0);
    temp_r1   = M2C_FIELD(arg2, s16 *, 4);
    if ((s32) temp_r1 >= (s32) M2C_FIELD(temp_r3_2, s16 *, 0x10)) {
        return;
    }
    M2C_FIELD(temp_r3_2, s16 *, 0x10) = temp_r1;
    func_02029120(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, s32 **, 4), temp_r0);
}
