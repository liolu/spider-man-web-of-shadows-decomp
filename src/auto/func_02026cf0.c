#include "m2c.h"

M2C_UNK func_02024690(s32, s32, u16, M2C_UNK *);    /* extern */
s32 func_02027d44(M2C_UNK);                         /* extern */
M2C_UNK func_02027d4c(M2C_UNK *, M2C_UNK);          /* extern */

void func_02026cf0(M2C_UNK arg0, void *arg1) {
    M2C_UNK sp0;

    func_02027d4c(&sp0, arg0);
    func_02024690(M2C_FIELD(arg1, s32 *, 0), func_02027d44(arg0), M2C_FIELD(arg1, u16 *, 4), &sp0);
}
