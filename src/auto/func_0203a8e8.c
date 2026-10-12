#include "m2c.h"

extern void *data_02145c5c;

void func_0203a8e8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(data_02145c5c, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_r3, u8 *, 1) * 0x1E) + (M2C_FIELD(temp_r3, u8 *, 0) * 0x708));
}
