#include "m2c.h"

M2C_UNK func_020e949c();                            /* extern */
M2C_UNK func_020e9644();                            /* extern */

void func_020e9450(void *arg0, void *arg1) {
    s32 temp_r2;

    if (((s32) M2C_FIELD(arg1, volatile s32 *, 0x70) <= 0) && ((s32) M2C_FIELD(arg0, volatile s32 *, 0x10) <= 0)) {
        return;
    }
    temp_r2                               = M2C_FIELD(arg1, volatile s32 *, 0x70) - 1;
    M2C_FIELD(arg1, volatile s32 *, 0x70) = temp_r2;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = temp_r2;
    if (temp_r2 <= 0) {
        M2C_FIELD(arg1, volatile s32 *, 0x70) = 0;
        M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
        func_020e9644();
        return;
    }
    func_020e949c();
}
