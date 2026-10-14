#include "m2c.h"

M2C_UNK func_02106688();                            /* extern */

void func_020dfb1c(void *arg0) {
    s32 temp_r2;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (temp_r2 - 1);
    if (temp_r2 >= 0) {
        return;
    }
    func_02106688();
}
