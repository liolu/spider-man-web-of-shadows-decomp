#include "m2c.h"

extern M2C_UNK data_021341f4;

void func_020bfd44(void *arg0, s32 *arg1) {
    s32 temp_r1;
    s32 temp_r2;
    void *temp_r3;

    temp_r1 = *arg1;
    if ((temp_r1 != 0xF) && (temp_r1 != 0x12)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x64) & 8) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x44);
    temp_r2 = M2C_FIELD(temp_r3, s32 *, 0x1C);
    if (temp_r2 > (s32) M2C_FIELD(&data_021341f4, s32 *, 0x34)) {
        return;
    }
    if (temp_r2 >= (s32) M2C_FIELD(&data_021341f4, s32 *, 0x28)) {
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) M2C_FIELD(&data_021341f4, s32 *, 0x74);
    }
}
