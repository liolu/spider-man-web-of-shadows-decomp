#include "m2c.h"

M2C_UNK func_020c983c(void *, s32 *);               /* extern */

void func_020a3fc4(void *arg0) {
    s32 sp0;

    sp0 = M2C_FIELD(arg0, s32 *, 0x14);
    func_020c983c(arg0, &sp0);
}
