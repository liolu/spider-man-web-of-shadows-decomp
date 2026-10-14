#include "m2c.h"

void func_0203137c(void *arg0, void **arg1) {
    void *temp_r2;

    temp_r2                   = *arg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r2, s32 *, 8);
}
