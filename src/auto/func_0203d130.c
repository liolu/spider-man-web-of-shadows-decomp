#include "m2c.h"

s32 func_0203d4f4(M2C_UNK *);                       /* extern */
s32 func_0203ee10(M2C_UNK *);                       /* extern */
M2C_UNK func_0203ee24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145d60;

void func_0203d130(void) {
    if (func_0203d4f4(&data_02145d60) != 0) {
        return;
    }
    if (func_0203ee10(&data_02145d60) == 0) {
        return;
    }
    func_0203ee24(&data_02145d60);
}
