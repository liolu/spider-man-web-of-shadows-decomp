#include "m2c.h"

M2C_UNK func_02084ab8(void **, M2C_UNK);            /* extern */

void func_020d3354(s32 *arg0, s32 arg1, M2C_UNK arg2) {
    void *sp0;

    func_02084ab8(&sp0, arg2);
    *arg0 = M2C_FIELD(sp0, s32 *, 0x18);
}
