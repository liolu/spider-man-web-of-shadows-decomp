#include "m2c.h"

M2C_UNK func_0201cb0c();                            /* extern */
M2C_UNK func_0201cd1c(void *);                      /* extern */
M2C_UNK func_020441d8(void *);                      /* extern */

void *func_0201cb2c(void *arg0) {
    func_0201cb0c();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    func_020441d8(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0201cd1c(arg0);
    return arg0;
}
