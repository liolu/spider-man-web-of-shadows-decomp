#include "m2c.h"

M2C_UNK func_020e326c(void *, u8 *);                /* extern */

void *func_020e3230(void *arg0, u8 *arg1) {
    u8 sp0;

    sp0 = *arg1;
    func_020e326c(arg0, &sp0);
    M2C_FIELD(arg0, s8 *, 0xC)   = 0;
    M2C_FIELD(arg0, s8 *, 0xD)   = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    return arg0;
}
