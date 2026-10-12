#include "m2c.h"

M2C_UNK func_020fe1c0();                            /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */

void func_02106a20(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020fe1c0(arg0);
    }
    func_020ff7c4(M2C_FIELD(arg1, s32 *, 4));
}
