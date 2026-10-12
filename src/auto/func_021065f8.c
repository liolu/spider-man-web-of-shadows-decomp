#include "m2c.h"

M2C_UNK func_02101750();                            /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0214e8c0;
extern M2C_UNK func_02106624;

void func_021065f8(void) {
    func_02101750();
    func_0210185c(0xE, &func_02106624);
    M2C_FIELD(&data_0214e8c0, s32 *, 4) = 0;
}
