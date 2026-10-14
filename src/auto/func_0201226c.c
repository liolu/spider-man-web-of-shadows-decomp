#include "m2c.h"

M2C_UNK func_02005ee0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02145614;
extern M2C_UNK data_02145714;

void func_0201226c(s32 arg0) {
    func_02005ee0((M2C_UNK *) ((s8 *) &data_02145614 + (arg0 << 7)), 0, 0x80, 8);
    func_02005ee0((M2C_UNK *) ((s8 *) &data_02145714 + (arg0 << 7)), 0xFF, 0x80, 8);
}
