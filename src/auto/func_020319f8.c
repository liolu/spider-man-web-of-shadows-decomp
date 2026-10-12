#include "m2c.h"

s32 func_02030fc0(s32);                             /* extern */
s32 func_02031920(s32 *);                           /* extern */

void func_020319f8(s32 *arg0, s32 *arg1, s32 arg2) {
    if ((arg2 < 0) || (arg2 >= func_02031920(arg1))) {
        *arg0 = 0;
        return;
    }
    *arg0 = (arg2 * 0x14) + (func_02030fc0(*arg1) + 0x10);
}
