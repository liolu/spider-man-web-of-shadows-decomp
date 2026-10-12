#include "m2c.h"

M2C_UNK func_020334c8();                            /* extern */
s32 func_0203361c(void *);                          /* extern */

void func_020333c8(void *arg0, s32 arg1) {
    func_020334c8();
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = func_0203361c(arg0);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
