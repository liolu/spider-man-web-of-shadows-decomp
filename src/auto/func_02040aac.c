#include "m2c.h"

M2C_UNK func_020f3980(s32, void *);                 /* extern */
M2C_UNK func_020f9028();                            /* extern */
extern M2C_UNK data_02148838;

void func_02040aac(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020f9028();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020f3980((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_02148838 + 0xC, arg0);
}
