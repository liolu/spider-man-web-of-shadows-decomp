#include "m2c.h"

u32 func_02043fd8(u32 *arg0) {
    s32 temp_r1_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r1;

    temp_r1 = *arg0;
    temp_r0_2 = temp_r1 >> 0x1F;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r1_2 = temp_r1 & ~0x80000000;
    temp_r0 = *(M2C_UNK *)temp_r1_2 + 1;
    *(M2C_UNK *)temp_r1_2 = temp_r0;
    return temp_r0;
}
