#include "m2c.h"

M2C_UNK func_0200dfd0(s32, s32);                    /* extern */
M2C_UNK func_0200ec18();                            /* extern */
M2C_UNK func_0200ec2c(s32, M2C_UNK);                /* extern */

void func_02021324(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    if (arg0 == 0) {
        return;
    }
    func_0200ec18();
    func_0200ec2c(arg0, arg3);
    if (arg2 == 0x7FFFFFFF) {
        return;
    }
    func_0200dfd0(arg0, arg2);
}
