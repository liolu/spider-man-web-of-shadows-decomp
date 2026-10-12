#include "m2c.h"

s32 func_0201bfc8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0 < 0x1F) {
        return 2;
    }
    return 1;
}
