#include "m2c.h"

M2C_UNK func_020273a8();                            /* extern */

void func_020d4588(void **arg0) {
    void *var_r0;
    void *var_r0_2;
    void *var_r1;

    func_020273a8();
    var_r1 = *arg0;
    var_r0 = var_r1;
    if (var_r1 != NULL) {
        var_r0 = var_r1 - 4;
    }
    if (var_r0 == NULL) {
        return;
    }
    var_r0_2 = var_r1;
    if (var_r1 != NULL) {
        var_r0_2 = var_r1 - 4;
    }
    if ((s32) M2C_FIELD(var_r0_2, s32 *, 0x30) < 0x64) {
        return;
    }
    if (var_r1 != NULL) {
        var_r1 -= 4;
    }
    M2C_FIELD(var_r1, s8 *, 0x2C) = 0;
}
