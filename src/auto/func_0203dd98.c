#include "m2c.h"

s32 func_0203e200(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 func_0203dd98(M2C_UNK arg0, s32 *arg1, M2C_UNK arg2) {
    if (func_0203e200(arg0, arg1, 0, arg2) == 0) {
        do {
            *arg1 += 1;
        } while (func_0203e200(arg0, arg1, 0, arg2) == 0);
    }
    return 1;
}
