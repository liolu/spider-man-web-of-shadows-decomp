#include "m2c.h"

void func_0207b378(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r1 > 0xA) {
        temp_r1_2 = temp_r1 - 1;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r1_2;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r1_2;
    }
}
