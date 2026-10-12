#include "m2c.h"

M2C_UNK func_020c97cc(void *, s32 *);               /* extern */

void func_020a4b64(void *arg0) {
    s32 sp0;

    sp0 = M2C_FIELD(arg0, s32 *, 0x14);
    func_020c97cc(arg0, &sp0);
}
