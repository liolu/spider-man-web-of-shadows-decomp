#include "m2c.h"

M2C_UNK func_02015630(M2C_UNK *);                   /* extern */
M2C_UNK func_020189ec(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02018a1c(s32, M2C_UNK, M2C_UNK *);     /* extern */

void func_020189b0(s32 arg0, M2C_UNK arg1) {
    u8 sp0[12];

    func_020189ec(sp0, arg0 + 0x44);
    func_02018a1c(arg0, arg1, sp0);
    func_02015630(sp0);
}
