#include "m2c.h"

M2C_UNK func_020f4e20();                            /* extern */

s32 func_0201d2b4(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        return 1;
    }
    func_020f4e20();
    return 0;
}
