#include "m2c.h"

s32 func_020f52c4();                    /* extern */

void func_020f5338(s32 *arg0, M2C_UNK arg1) {
    if ((func_020f52c4(((s8 *) arg0 + 0x10)) == 0) && (func_020f52c4(((s8 *) arg0 + 8), arg1) == 0) &&
        (func_020f52c4(((s8 *) arg0 + 0x18), arg1) == 0)) {
        return;
    }
    *arg0 |= 0x10;
}
