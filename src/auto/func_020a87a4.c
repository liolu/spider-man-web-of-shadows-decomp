#include "m2c.h"

s32 func_020a87a4(void *arg0, s32 arg1) {
    u8 temp_r2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x80) > 0) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, u8 *, 0x9C);
    if (temp_r2 != 0) {
        M2C_FIELD(arg0, u8 *, 0x9C) = (u8) (temp_r2 - 1);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    M2C_FIELD(arg0, u8 *, 0x9C)  = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 0x30);
    return 1;
}
