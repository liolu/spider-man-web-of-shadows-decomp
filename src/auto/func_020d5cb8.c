#include "m2c.h"

M2C_UNK func_020d5cd0(void *, s32);                 /* extern */

void func_020d5cb8(void *arg0) {
    s32 temp_r1;

    temp_r1                   = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = -1;
    func_020d5cd0(arg0, temp_r1);
}
