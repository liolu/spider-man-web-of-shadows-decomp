#include "m2c.h"

M2C_UNK func_02043c5c(void *);                      /* extern */

void *func_020d1aa4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02043c5c(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}
