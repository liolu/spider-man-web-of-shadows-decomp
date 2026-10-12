#include "m2c.h"

M2C_UNK func_02101750();                            /* extern */
M2C_UNK func_0210185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_021018a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_021067c4();                            /* extern */
M2C_UNK func_02106a94(M2C_UNK);                     /* extern */
M2C_UNK func_02106b90();                            /* extern */
M2C_UNK func_02106e34(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214e8e0;
extern M2C_UNK data_0214e9c0;
extern M2C_UNK func_02106d84;
extern M2C_UNK func_02106db0;
extern M2C_UNK func_02106e20;

void func_02106adc(void) {
    if (M2C_FIELD(&data_0214e8e0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_0214e8e0, s32 *, 8) = 1;
    func_021067c4();
    M2C_FIELD(&data_0214e8e0, s32 *, 0xC) = 0;
    func_02101750();
    do {

    } while (func_021018a8(0xD, 1) == 0);
    func_0210185c(0xD, &func_02106d84);
    func_02106b90();
    func_0210185c(0xD, NULL);
    func_0210185c(0xD, &func_02106db0);
    M2C_FIELD(&data_0214e8e0, s32 *, 0x18) = 0;
    func_02106e34(&data_0214e9c0);
    func_0210185c(0x11, &func_02106e20);
    func_02106a94(0);
}
