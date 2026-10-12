#include "m2c.h"

s32 func_020e60b8(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xDC) >= 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xE0) >= 0)) {
        return 1;
    }
    return 0;
}
