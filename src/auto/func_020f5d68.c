#include "m2c.h"

s32 func_020f5d68(M2C_UNK arg0, void *arg1, s32 arg2) {
    s32 var_r0;
    u16 temp_r2;
    void *var_r6;

    var_r6 = arg1;
    var_r0 = 0;
    do {
        temp_r2 = M2C_FIELD((var_r6 + (arg2 * 2)), u16 *, 0x1A);
        if (temp_r2 & 0x100) {
            M2C_FIELD(var_r6, M2C_UNK(**)(M2C_UNK, void *, u8), 0xC)(arg0, var_r6, (u8) temp_r2);
            var_r0 = 1;
        }
        var_r6 = M2C_FIELD(var_r6, void **, 0x10);
    } while (var_r6 != NULL);
    return var_r0;
}
