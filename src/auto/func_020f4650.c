#include "m2c.h"

s32 func_020f4650(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, u16 *, 8) * 0x10);
}
