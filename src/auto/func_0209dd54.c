#include "m2c.h"

M2C_UNK func_02049ce4(s32, M2C_UNK);                /* extern */

void func_0209dd54(void *arg0, s32 arg1, s32 *arg2) {
    if (*arg2 == 0x2E) {
        return;
    }
    func_02049ce4(M2C_FIELD(arg0, s32 *, 0x44), 0);
}
