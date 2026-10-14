#include "m2c.h"

M2C_UNK func_020e2464(void *, u8 *);                /* extern */

void *func_020e2428(void *arg0, u8 *arg1) {
    u8 sp0;

    sp0 = *arg1;
    func_020e2464(arg0, &sp0);
    M2C_FIELD(arg0, s8 *, 0xC)   = 1;
    M2C_FIELD(arg0, s8 *, 0xD)   = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    return arg0;
}
