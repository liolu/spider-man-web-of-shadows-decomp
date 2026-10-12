#include "m2c.h"

M2C_UNK func_02043858();                            /* extern */

void func_020437a0(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02043858(arg0);
}
