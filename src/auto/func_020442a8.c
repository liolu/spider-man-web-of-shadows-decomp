#include "m2c.h"

M2C_UNK func_02006194(s32);                         /* extern */

void func_020442a8(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (arg1 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02006194(temp_r0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
