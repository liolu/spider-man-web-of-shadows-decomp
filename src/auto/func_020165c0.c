#include "m2c.h"

M2C_UNK func_020167fc();                            /* extern */
extern s8 data_02145884;

void func_020165c0(void) {
    data_02145884 = 1;
    func_020167fc();
    data_02145884 = 0;
}
