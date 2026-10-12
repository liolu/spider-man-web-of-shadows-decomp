#include "m2c.h"

s32 func_020149b4(void *arg0) {
    s32 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x14);
    temp_r1 = M2C_FIELD(temp_r2, s32 *, 0x14) + 1;
    M2C_FIELD(temp_r2, s32 *, 0x14) = temp_r1;
    if (temp_r1 > 0x3F) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14) = 5;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x14);
}
