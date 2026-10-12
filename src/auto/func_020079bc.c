#include "m2c.h"

s32 func_020079f0(s32);                             /* extern */

s32 func_020079bc(s32 arg0) {
    s32 temp_r4;

    if (arg0 == 0x7FFFFFFF) {
        return 0;
    }
    temp_r4 = func_020079f0(arg0 + 1);
    return temp_r4 - func_020079f0(arg0);
}
