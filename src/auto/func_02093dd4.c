#include "m2c.h"

s32 func_02093dd4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x88);
    if (!(temp_r1 & 1) || !(temp_r1 & 2) || ((u32) (M2C_FIELD(arg0, s32 *, 0x14) - 0x31) <= 4U)) {
        return 0;
    }
    return 1;
}
