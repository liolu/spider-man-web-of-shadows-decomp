#include "m2c.h"

M2C_UNK func_02041868(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02100884(s32, s32);                    /* extern */
M2C_UNK func_02101428(s32);                         /* extern */

void func_020418e8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02041868(arg0, arg2, arg3);
    func_02100884(arg0, arg0 + arg1);
    func_02101428(arg0);
}
