#include "m2c.h"

M2C_UNK func_020e8268(void *, s32, s32, u16);       /* extern */
M2C_UNK func_020e8278(void *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020e8e20(void *);                      /* extern */

void func_020e8d68(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r4 < 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x24);
    func_020e8278(arg0, temp_r1, M2C_FIELD(arg0, s32 *, 0x28), (temp_r1 + temp_r4) - 1, 1, (s32) (u16) M2C_FIELD(arg0, s32 *, 0x38));
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x34) - 2) <= 1U) {
        func_020e8268(arg0, M2C_FIELD(arg0, s32 *, 0x24) + temp_r4, M2C_FIELD(arg0, s32 *, 0x28), (u16) M2C_FIELD(arg0, s32 *, 0x38));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34);
    if ((temp_r0 != 1) && (temp_r0 != 3)) {

    } else {
        func_020e8268(arg0, M2C_FIELD(arg0, s32 *, 0x24) - 1, M2C_FIELD(arg0, s32 *, 0x28), (u16) M2C_FIELD(arg0, s32 *, 0x38));
    }
    func_020e8e20(arg0);
}
