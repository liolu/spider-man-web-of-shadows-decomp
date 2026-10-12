#include "m2c.h"

M2C_UNK func_0200dfd0(void *, s32);                 /* extern */
M2C_UNK func_0200ec18();                            /* extern */
M2C_UNK func_0200ec2c(void *, s32);                 /* extern */

void func_0201f494(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    func_0200ec18();
    func_0200ec2c(arg0, arg4);
    if (arg2 == 0x7FFFFFFF) {
        return;
    }
    func_0200dfd0(arg0, arg2);
}
