#include "m2c.h"

void func_0207c104(s32 *arg0, void *arg1) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg1, s32 *, 0x40);
    if (var_r1 != 0) {
        var_r1 -= 4;
    }
    *arg0 = var_r1;
}
