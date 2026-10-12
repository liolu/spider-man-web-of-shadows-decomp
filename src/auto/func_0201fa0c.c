#include "m2c.h"

M2C_UNK func_0200dcc0();                            /* extern */
M2C_UNK func_0200ec34(s32, s32);                    /* extern */

void func_0201fa0c(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x6C) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_0200dcc0();
    }
    func_0200ec34(M2C_FIELD(arg0, s32 *, 0x6C), arg1);
}
