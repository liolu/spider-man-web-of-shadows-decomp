#include "m2c.h"

s32 func_02006fec(void *arg0) {
    return (M2C_FIELD(arg0, u16 *, 0xA) * 0x1C) + M2C_FIELD(arg0, s32 *, 0);
}
