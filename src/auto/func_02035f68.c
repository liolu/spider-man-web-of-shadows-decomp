#include "m2c.h"

M2C_UNK func_02035e04(void **, s32, s32, M2C_UNK);  /* extern */
M2C_UNK func_02036200(void *, s32);                 /* extern */

void func_02035f68(s32 *arg0, s32 *arg1, M2C_UNK arg2, s32 arg3) {
    void *sp0;

    func_02035e04(&sp0, *arg0, *arg1, arg2);
    if (arg3 == M2C_FIELD(sp0, s32 *, 4)) {
        return;
    }
    func_02036200(sp0, arg3);
}
