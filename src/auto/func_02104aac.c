#include "m2c.h"

M2C_UNK func_02101750();                            /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_021018a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0214dfb4;
extern M2C_UNK func_02104bc4;

void func_02104aac(void) {
    if (M2C_FIELD(&data_0214dfb4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0214dfb4, u16 *, 0) = 1U;
    M2C_FIELD(&data_0214dfb4, s32 *, 4) = 0;
    M2C_FIELD(&data_0214dfb4, s32 *, 8) = 0;
    M2C_FIELD(&data_0214dfb4, s32 *, 0x20) = 0;
    M2C_FIELD(&data_0214dfb4, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0214dfb4, s32 *, 0x10) = 0;
    func_02101750();
    do {

    } while (func_021018a8(5, 1) == 0);
    func_0210185c(5, &func_02104bc4);
}
