#include "m2c.h"

s32 func_02074e3c(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x2FC) & 8) {
        return 1;
    }
    return 0;
}
