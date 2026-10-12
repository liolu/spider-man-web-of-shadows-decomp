#include "m2c.h"

M2C_UNK func_02045680(s32);                         /* extern */
M2C_UNK func_020f2fcc(s32);                         /* extern */

s32 func_020f2988(s32 arg0) {
    func_020f2fcc(arg0 + 0x24);
    func_02045680(arg0);
    return arg0;
}
