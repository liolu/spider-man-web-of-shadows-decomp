#include "m2c.h"

M2C_UNK func_0200acfc(void *, s32, M2C_UNK);        /* extern */

void func_0200ae80(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        return;
    }
    func_0200acfc(arg0, M2C_FIELD(arg0, s32 *, 0x4C), 1);
}
