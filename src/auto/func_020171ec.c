#include "m2c.h"

M2C_UNK func_02015a9c(void *);                      /* extern */

void func_020171ec(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x18C);
    if (temp_r4 == NULL) {
        return;
    }
    func_02015a9c(temp_r4);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(temp_r4, s32 *, 0xC);
}
