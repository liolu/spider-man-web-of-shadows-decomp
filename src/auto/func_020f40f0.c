#include "m2c.h"

u16 func_020f40f0(void *arg0, u16 arg1) {
    u16 temp_r2;

    temp_r2                      = M2C_FIELD(arg0, u16 *, 0x34);
    M2C_FIELD(arg0, u16 *, 0x34) = arg1;
    return temp_r2;
}
