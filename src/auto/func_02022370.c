#include "m2c.h"

void func_02022370(void *arg0, u8 arg1) {
    u8 temp_r3;

    temp_r3                     = M2C_FIELD(arg0, u8 *, 0x64);
    M2C_FIELD(arg0, u8 *, 0x64) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, u8), 0x28)(arg0, temp_r3);
}
