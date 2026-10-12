#include "m2c.h"

void func_020446d8(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (var_r1 & 1) {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 7;
    }
}
