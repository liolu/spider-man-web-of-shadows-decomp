#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02045680(s32);                         /* extern */

s32 func_0207b2f4(s32 arg0) {
    func_02045680(arg0 + 4);
    func_02006188(arg0);
    return arg0;
}
