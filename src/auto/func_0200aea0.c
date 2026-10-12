#include "m2c.h"

M2C_UNK func_0200ae80(s32);                         /* extern */

void func_0200aea0(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        func_0200ae80(arg1);
    }
    *arg0 = (arg2 * 0x24) + arg1;
}
