#include "m2c.h"

void func_020f421c(void *arg0) {
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 0x2C);
    if (var_r2 != NULL) {
        do {
            M2C_FIELD(var_r2, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            var_r2                      = M2C_FIELD(var_r2, void **, 0xC);
        } while (var_r2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}
