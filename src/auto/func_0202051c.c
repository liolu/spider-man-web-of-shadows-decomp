#include "m2c.h"

s32 func_0202051c(s32 *arg0, void *arg1) {
    if ((s32) *arg0 >= (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return 1;
    }
    return 0;
}
