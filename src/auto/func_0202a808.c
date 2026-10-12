#include "m2c.h"

s32 func_0202a808(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = M2C_FIELD(arg1, s32 *, 0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r2 < temp_r3) {
        return 1;
    }
    if (temp_r2 > temp_r3) {
        return 0;
    }
    temp_r3_2 = M2C_FIELD(arg1, s32 *, 4);
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2_2 < temp_r3_2) {
        return 1;
    }
    if (temp_r2_2 > temp_r3_2) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) < (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return 1;
    }
    return 0;
}
