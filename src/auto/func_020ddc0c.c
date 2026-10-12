#include "m2c.h"

M2C_UNK func_020ddcdc();                            /* extern */

s32 func_020ddc0c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xAC);
    if (temp_r1 < 0) {
        return;
    }
    if (temp_r1 >= 3) {
        return;
    }
    func_020ddcdc();
    return M2C_FIELD(arg0, s32 *, 0xAC) = -1;
}
