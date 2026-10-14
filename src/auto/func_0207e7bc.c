#include "m2c.h"

M2C_UNK func_0207e810();                            /* extern */
M2C_UNK func_0207e964(void *);                      /* extern */

void *func_0207e7bc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, u8 *, 4)     = 0U;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    func_0207e810(arg0);
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        func_0207e964(arg0);
    }
    return arg0;
}
