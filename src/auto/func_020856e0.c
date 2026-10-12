#include "m2c.h"

M2C_UNK func_020855a8(void *);                      /* extern */

void *func_020856e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    func_020855a8(arg0 + 8);
    return arg0;
}
