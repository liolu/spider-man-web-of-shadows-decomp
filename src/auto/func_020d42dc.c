#include "m2c.h"

void func_020d42dc(s32 *arg0, s32 **arg1) {
    s32 var_r1;

    var_r1 = **arg1;
    if (var_r1 != 0) {
        var_r1 -= 4;
    }
    if (var_r1 == 0) {
        var_r1 = 0;
    }
    *arg0 = var_r1;
}
