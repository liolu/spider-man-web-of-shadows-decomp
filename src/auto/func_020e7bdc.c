#include "m2c.h"

M2C_UNK func_020e8e20();                            /* extern */

void func_020e7bdc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020e8e20();
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020e8e20();
}
