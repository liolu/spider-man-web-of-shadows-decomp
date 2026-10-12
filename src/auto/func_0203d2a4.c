#include "m2c.h"

M2C_UNK func_02040094();                            /* extern */
extern M2C_UNK data_02145cb4;

void func_0203d2a4(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    if (var_r0 > 0x7F) {
        var_r0 = 0x7F;
    }
    M2C_FIELD(&data_02145cb4, s32 *, 0x9C) = var_r0;
    func_02040094();
}
