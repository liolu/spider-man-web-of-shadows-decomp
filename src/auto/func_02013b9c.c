#include "m2c.h"

void func_02013b9c(void *arg0, s8 arg1) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
    do {
        var_r2 += 1;
        M2C_FIELD(var_r0, s8 *, 0x14) = arg1;
        var_r0 += 0x78;
    } while (var_r2 < 2);
}
