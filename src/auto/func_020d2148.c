#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0201874c(s32);                         /* extern */
M2C_UNK func_02019ca0(s32);                         /* extern */

s32 func_020d2148(s32 arg0) {
    func_0201874c(arg0 + 0x60);
    func_02019ca0(arg0);
    func_02006188(arg0);
    return arg0;
}
