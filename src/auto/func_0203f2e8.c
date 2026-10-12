#include "m2c.h"

M2C_UNK func_0203d564(void *);                      /* extern */
M2C_UNK func_0203f6ac(void *);                      /* extern */

void *func_0203f2e8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0203d564(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    func_0203f6ac(arg0);
    return arg0;
}
