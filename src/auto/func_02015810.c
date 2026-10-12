#include "m2c.h"

M2C_UNK func_02007b44(M2C_UNK, s32, s32, s32);      /* extern */
void *func_02015880(void *, M2C_UNK);               /* extern */
M2C_UNK func_020158d0(void *, M2C_UNK);             /* extern */

void func_02015810(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = func_02015880(arg0, arg2);
    func_020158d0(arg0, arg2);
    func_02007b44(arg1, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(temp_r4, s32 *, 8), M2C_FIELD(temp_r4, s32 *, 0xC));
}
