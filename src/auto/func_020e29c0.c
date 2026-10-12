#include "m2c.h"

s32 func_020e3484(void *, s32);                     /* extern */

s32 func_020e29c0(void *arg0) {
    if (func_020e3484(arg0, M2C_FIELD(arg0, s32 *, 8)) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return 1;
    }
    return 0;
}
