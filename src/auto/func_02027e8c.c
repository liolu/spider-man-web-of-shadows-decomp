#include "m2c.h"

M2C_UNK func_01ff98a4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02027db4(M2C_UNK *, s32, M2C_UNK, void *); /* extern */

void func_02027e8c(void *arg0, M2C_UNK arg1) {
    u8 sp4[12];
    M2C_UNK sp0;

    func_02027db4(&sp0, M2C_FIELD(arg0, s32 *, 0x54), arg1, arg0 + 0x6C);
    func_01ff98a4(arg0, sp4);
}
