#include "m2c.h"

M2C_UNK func_02014af4();                            /* extern */
M2C_UNK func_02014b10(s32);                         /* extern */

s32 func_02014ad8(s32 arg0) {
    func_02014af4();
    func_02014b10(arg0 + 0xC);
    return arg0;
}
