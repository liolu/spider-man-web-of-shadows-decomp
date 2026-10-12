#include "m2c.h"

s32 func_020b7a84(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x14) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 8) <= 3)) {
        return 0x32;
    }
    return 0x7FFFFFFF;
}
