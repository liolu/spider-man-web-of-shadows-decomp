#include "m2c.h"

M2C_UNK func_020151c0(void *);                      /* extern */
M2C_UNK func_020f4aa0();                            /* extern */
extern s32 (*data_0213d8b4)(s32, M2C_UNK, M2C_UNK);

void func_02015154(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        return;
    }
    if (temp_r0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    temp_r0_2 = data_0213d8b4(temp_r0, var_r1, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0_2;
    if (temp_r0_2 == 0) {
        func_020f4aa0();
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x3C) = 1U;
    func_020151c0(arg0);
}
