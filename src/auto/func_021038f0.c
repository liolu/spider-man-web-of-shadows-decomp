#include "m2c.h"

M2C_UNK func_02101750();                            /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_021018a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0214df10;
extern M2C_UNK func_02103670;

void func_021038f0(void) {
    if (M2C_FIELD(&data_0214df10, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0214df10, u16 *, 0) = 1U;
    func_02101750();
    M2C_FIELD(&data_0214df10, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0214df10, s32 *, 4)    = 0;
    M2C_FIELD(&data_0214df10, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0214df10, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0214df10, s16 *, 0x34) = 0;
    M2C_FIELD(&data_0214df10, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_0214df10, s16 *, 0x38) = 0;
    do {

    } while (func_021018a8(6, 1) == 0);
    func_0210185c(6, &func_02103670);
}
