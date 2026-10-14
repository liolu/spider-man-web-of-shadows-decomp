#include "m2c.h"

s32 func_0208137c(s32, s32, s32, u8);               /* extern */

s32 func_02093528(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_2;
    u8 temp_r0;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x80) > 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0xA8);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u8 *, 0xA8) = (u8) (temp_r0 - 1);
        return 0;
    }
    if ((arg1 == 8) || (temp_r3 = M2C_FIELD(arg0, void **, 0x68), ((M2C_FIELD(temp_r3, s32 *, 4) & 0x200000) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x80) = arg2;
        M2C_FIELD(arg0, u8 *, 0xA8)  = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 0x30);
        return 1;
    }
    temp_r0_2                    = func_0208137c(M2C_FIELD(arg0, s32 *, 0xA4), arg1, arg2, M2C_FIELD(temp_r3, u8 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x80) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0xA8) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 0x30);
    return 1;
}
