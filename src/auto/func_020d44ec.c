#include "m2c.h"

M2C_UNK func_02024690(s32, s32, u16, M2C_UNK *);    /* extern */
s32 func_02027d44(void *);                          /* extern */
M2C_UNK func_02027d4c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020d4898(void *, s32, s32, u16, M2C_UNK *); /* extern */

void func_020d44ec(void *arg0, void *arg1) {
    M2C_UNK sp8;
    M2C_UNK sp4;

    if ((M2C_FIELD(arg1, s32 *, 0) == 3) && (M2C_FIELD(arg0, u8 *, 0x20) != 0)) {
        func_02027d4c(&sp8, arg0);
        func_020d4898(arg0, M2C_FIELD(arg1, s32 *, 0), func_02027d44(arg0), M2C_FIELD(arg1, u16 *, 4), &sp8);
    } else {
        func_02027d4c(&sp4, arg0);
        func_02024690(M2C_FIELD(arg1, s32 *, 0), func_02027d44(arg0), M2C_FIELD(arg1, u16 *, 4), &sp4);
    }
    if (M2C_FIELD(arg1, s32 *, 0) == 2) {
        M2C_FIELD(arg0, u8 *, 0x20) = 1U;
    }
}
