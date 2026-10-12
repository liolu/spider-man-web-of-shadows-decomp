#include "m2c.h"

s32 func_0203d298();                                /* extern */
M2C_UNK func_0203d4a0(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02145cb4;

void func_0203d2cc(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0x7F) {
        var_r4 = 0x7F;
    }
    M2C_FIELD(&data_02145cb4, s32 *, 0xA0) = var_r4;
    func_0203d4a0(func_0203d298(), var_r4, 0);
}
