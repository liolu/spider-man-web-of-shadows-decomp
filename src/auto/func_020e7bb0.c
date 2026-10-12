#include "m2c.h"

M2C_UNK func_020e8d68();                            /* extern */

void func_020e7bb0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020e8d68();
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020e8d68();
}
