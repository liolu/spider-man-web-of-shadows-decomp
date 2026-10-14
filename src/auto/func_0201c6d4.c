#include "engine.h"
#include "m2c.h"

s32 func_0201c6d4(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r1;

    var_r1 = arg1 - 1;
    var_r0 = 0;
    if (var_r1 == 0) {
        return 0;
    }
    do {
        var_r1 = var_r1 >> 1;
        var_r0 += 1;
    } while (var_r1 != 0);
    return var_r0;
}
