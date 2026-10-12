#include "m2c.h"

s32 func_02023e90(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x20) != M2C_FIELD(arg0, s32 *, 0x24)) {
        return 1;
    }
    return 0;
}
