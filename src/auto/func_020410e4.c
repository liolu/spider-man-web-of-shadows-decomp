#include "m2c.h"

s32 func_02103320(void *, M2C_UNK, u32);            /* extern */
s32 func_02103330(void *, s32, M2C_UNK);            /* extern */
extern void *data_02148cb8;

s32 func_020410e4(u32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 var_r5;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    var_r5  = arg2;
    temp_r4 = data_02148cb8;
    temp_r2 = M2C_FIELD(temp_r4, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return -1;
    }
    temp_r1 = temp_r2 + 0xC + (arg0 * 0x10);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 4) - arg3;
    if (var_r5 > temp_r0) {
        var_r5 = temp_r0;
    }
    if (func_02103330(temp_r4 + 0x34, M2C_FIELD(temp_r1, s32 *, 0) + arg3, 0) == 0) {
        return -1;
    }
    return func_02103320(temp_r4 + 0x34, arg1, var_r5);
}
