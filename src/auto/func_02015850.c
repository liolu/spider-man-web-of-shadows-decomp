#include "m2c.h"

void *func_02015880(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020158d0();                            /* extern */

s32 func_02015850(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r1;
    s32 var_r0;
    void *temp_r0;

    func_020158d0();
    temp_r0 = func_02015880(arg0, arg1);
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    var_r0 = M2C_FIELD(temp_r0, s32 *, 0x10);
    if (var_r0 < temp_r1) {
        var_r0 = temp_r1;
    }
    return var_r0;
}
