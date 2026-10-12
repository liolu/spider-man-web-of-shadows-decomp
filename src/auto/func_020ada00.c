#include "m2c.h"

void func_020ada00(s32 *arg0, void *arg1) {
    s32 var_r1;

    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), u8 *, 0xC) != 0) {
        var_r1 = 0;
    } else {
        var_r1 = 0x399;
    }
    *arg0 = var_r1;
}
