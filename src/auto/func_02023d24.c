#include "m2c.h"

M2C_UNK func_02043c5c(void *);                      /* extern */

void *func_02023d24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02043c5c(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
