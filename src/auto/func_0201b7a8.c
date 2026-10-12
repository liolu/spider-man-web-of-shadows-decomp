#include "m2c.h"

s32 func_0201b2a4();                                /* extern */
M2C_UNK func_0201bc44(void *, s32, s32);            /* extern */

void func_0201b7a8(void *arg0) {
    s32 var_r4;

    if (func_0201b2a4() == 0) {
        return;
    }
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x54) <= 0) {
        return;
    }
    do {
        func_0201bc44(arg0, M2C_FIELD(arg0, s32 *, 0x34), (var_r4 * M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xC)) + M2C_FIELD(arg0, s32 *, 0x38));
        var_r4 += 1;
    } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x54));
}
