#include "m2c.h"

M2C_UNK func_02013a30(void *, M2C_UNK, s32 *);      /* extern */
M2C_UNK func_0201702c(void *, void *);              /* extern */
M2C_UNK func_02017058(void *, s32);                 /* extern */

void func_02012f4c(void *arg0, M2C_UNK arg1) {
    s32 sp0;

    func_02017058(arg0, arg0 + 0x2A0);
    sp0 = M2C_FIELD(arg0, s32 *, 0x18C);
    func_02013a30(arg0 + 0x2A0, arg1, &sp0);
    func_0201702c(arg0, arg0 + 0x2A0);
}
