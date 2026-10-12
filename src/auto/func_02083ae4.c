#include "m2c.h"

void func_02083ae4(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;

    var_r1 = arg1;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r2 >= var_r1) {
        var_r1 = temp_r2;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
