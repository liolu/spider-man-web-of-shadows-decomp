#include "m2c.h"

M2C_UNK func_020fefb0(s32, s32);                    /* extern */
extern M2C_UNK data_021225e4;

void func_020f4608(void *arg0) {
    M2C_UNK (*temp_r4)(s32, s32, s32);

    temp_r4 = *((M2C_UNK *)((s8 *)&data_021225e4 + (M2C_FIELD(arg0, s32 *, 0) * 4)));
    func_020fefb0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_r4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
