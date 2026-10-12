#include "m2c.h"

s32 func_020a29d0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) & 4) {
        return 0x3A;
    }
    return 0x7FFFFFFF;
}
