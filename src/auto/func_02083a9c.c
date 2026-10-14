#include "m2c.h"

void func_02083a9c(void *arg0) {
    s32 var_r1;

    if (((s32) M2C_FIELD(arg0, s32 *, 4) <= 0) && ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    var_r1                       = M2C_FIELD(arg0, s32 *, 0) - 2;
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r1;
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0x4B000;
}
