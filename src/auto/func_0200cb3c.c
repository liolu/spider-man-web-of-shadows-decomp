/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void func_0200cb3c(void *arg0) {
    void *var_r3;
    void *var_r3_2;

    var_r3 = arg0;
    do {
        M2C_FIELD(var_r3, s32 *, 0) = 0;
        M2C_FIELD(var_r3, s32 *, 4) = 0;
        var_r3 += 8;
    } while ((u32) var_r3 < (u32) (arg0 + 0x400));
    var_r3_2 = arg0 + 0x700;
    do {
        M2C_FIELD(var_r3_2, s32 *, 0) = 0;
        M2C_FIELD(var_r3_2, s32 *, 4) = 0;
        M2C_FIELD(var_r3_2, s16 *, 8) = 0;
        var_r3_2 += 0x10;
    } while ((u32) var_r3_2 < (u32) (arg0 + 0x900));
    M2C_FIELD(arg0, s32 *, 0x900) = 0;
}
