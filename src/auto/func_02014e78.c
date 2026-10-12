#include "m2c.h"

M2C_UNK func_01ffc004(M2C_UNK, u32 *, M2C_UNK);     /* extern */

void func_02014e78(void *arg0, s32 arg1) {
    u32 sp0;
    s32 var_r2;

    if (arg1 == 2) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    sp0 = (u32) ((u32) (M2C_FIELD(arg0, s32 *, 8) << 0x10) >> 0xD) >> (4 - var_r2);
    func_01ffc004(0x2B, &sp0, 1);
}
