#include "m2c.h"

M2C_UNK func_020ff820(M2C_UNK);                     /* extern */
s32 func_021010d0();                                /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_021018a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_02100fdc;

void func_02101000(void) {
    func_0210185c(7, &func_02100fdc);
    if (func_021010d0() == 0) {
        return;
    }
    if (func_021018a8(7, 1) != 0) {
        return;
    }
    do {
        func_020ff820(0x64);
    } while (func_021018a8(7, 1) == 0);
}
