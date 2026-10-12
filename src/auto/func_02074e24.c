#include "m2c.h"

s32 func_02074e24(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x2FC) & 4) {
        return 1;
    }
    return 0;
}
