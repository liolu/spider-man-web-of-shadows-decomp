#include "m2c.h"

s32 func_0200aeec(u16);                             /* extern */

s32 func_0200af08(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0);
    if (temp_r1 == 0x20) {
        return 1;
    }
    if ((temp_r1 == 0x2D) && (func_0200aeec(M2C_FIELD(arg0, u16 *, 2)) == 0)) {
        return 1;
    }
    return 0;
}
