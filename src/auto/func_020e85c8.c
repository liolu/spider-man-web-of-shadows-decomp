#include "m2c.h"

M2C_UNK func_020e85fc();                            /* extern */

void func_020e85c8(void *arg0, void *arg1) {
    u8 temp_ip;

    temp_ip = M2C_FIELD(arg1, u8 *, 0x4E);
    if ((M2C_FIELD(arg0, s32 *, 0x20) == temp_ip) && (M2C_FIELD(arg1, s32 *, 0x94) == M2C_FIELD(arg0, s32 *, 0x1C))) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) temp_ip;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x94);
    func_020e85fc();
}
