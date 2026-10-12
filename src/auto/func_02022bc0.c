#include "m2c.h"

u32 func_02022bc0(u32 arg0) {
    u32 var_r1;

    var_r1 = 1;
    if (arg0 > 1U) {
        do {
            var_r1 *= 2;
        } while (arg0 > var_r1);
    }
    return var_r1;
}
