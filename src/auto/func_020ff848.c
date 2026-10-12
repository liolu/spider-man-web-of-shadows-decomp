#include "m2c.h"

M2C_UNK func_02101750();                            /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_021018a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0214c260;
extern M2C_UNK func_020ff89c;

void func_020ff848(void) {
    if (M2C_FIELD(&data_0214c260, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0214c260, u16 *, 2) = 1U;
    func_02101750();
    do {

    } while (func_021018a8(0xC, 1) == 0);
    func_0210185c(0xC, &func_020ff89c);
}
