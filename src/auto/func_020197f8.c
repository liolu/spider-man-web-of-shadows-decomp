#include "m2c.h"

void *func_020197f8(s32 arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_r4;
    u32 temp_r4;
    u32 temp_r7;
    void *var_r2;
    void *var_r3;

    var_r2 = arg2;
    var_r3 = arg3;
    if (var_r2 != NULL) {
        temp_r7 = M2C_FIELD(arg1, u32 *, 4);
        do {
            temp_r4 = M2C_FIELD(var_r2, u32 *, 0x10);
            if (temp_r4 < temp_r7) {
                var_r4 = 1;
            } else if (temp_r4 > temp_r7) {
                var_r4 = 0;
            } else if ((s32) M2C_FIELD(var_r2, s32 *, 0x14) < (s32) M2C_FIELD(arg1, s32 *, 8)) {
                var_r4 = 1;
            } else {
                var_r4 = 0;
            }
            if (var_r4 == 0) {
                var_r3 = var_r2;
                var_r2 = M2C_FIELD(var_r2, void **, 0);
            } else {
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            }
        } while (var_r2 != NULL);
    }
    return var_r3;
}
