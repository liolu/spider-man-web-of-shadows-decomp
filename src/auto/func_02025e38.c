#include "m2c.h"

M2C_UNK func_0201a568(void **, s32, M2C_UNK);       /* extern */

void func_02025e38(void *arg0, s32 arg1) {
    void *sp0;
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_r1 == 0) {
        return;
    }
    func_0201a568(&sp0, temp_r1, 0);
    if (sp0 != NULL) {
        M2C_FIELD(sp0, s32 *, 0x80) = arg1;
    }
}
