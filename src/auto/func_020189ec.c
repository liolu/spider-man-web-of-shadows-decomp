#include "m2c.h"

M2C_UNK func_02018d88();                            /* extern */

void func_020189ec(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        func_02018d88(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
