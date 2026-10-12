#include "m2c.h"

M2C_UNK func_020134f4(s32, void **);                /* extern */

void func_02017058(void *arg0, s32 arg1) {
    void *sp0;

    if ((arg1 != 0) && (M2C_FIELD(arg0, s32 *, 0x18C) != 0)) {
        sp0 = arg0 + 0x10;
        func_020134f4(arg1, &sp0);
    }
}
