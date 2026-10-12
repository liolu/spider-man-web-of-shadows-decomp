#include "m2c.h"

void func_0201721c(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x3F) {
        var_r1 = 0x3F;
    }
    M2C_FIELD(arg0, s8 *, 0x186) = (s8) var_r1;
}
