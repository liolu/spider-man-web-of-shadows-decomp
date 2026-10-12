#include "m2c.h"

M2C_UNK func_02012ee0(s32);                         /* extern */
M2C_UNK func_02019ca0(s32);                         /* extern */

s32 func_020489bc(s32 arg0) {
    func_02012ee0(arg0 + 0x60);
    func_02019ca0(arg0);
    return arg0;
}
