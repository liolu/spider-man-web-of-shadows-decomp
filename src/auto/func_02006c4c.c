#include "m2c.h"

s32 func_02006c4c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0xC) == M2C_FIELD(arg0, s32 *, 4)) {
        return 1;
    }
    return 0;
}
