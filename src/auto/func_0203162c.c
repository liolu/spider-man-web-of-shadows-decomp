#include "m2c.h"

M2C_UNK func_020062e4(s32);                         /* extern */
M2C_UNK func_02031de0(s32);                         /* extern */

s32 func_0203162c(s32 arg0) {
    func_02031de0(arg0 + 0x18);
    func_020062e4(arg0 + 8);
    return arg0;
}
