#include "m2c.h"

M2C_UNK func_021006ec(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02100ca4(M2C_UNK);                     /* extern */
M2C_UNK func_02100e60(s32);                         /* extern */
s32 func_02100ecc();                                /* extern */

void func_020439bc(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_021006ec(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02100ecc();
    func_02100ca4(1);
    func_02100e60(temp_r4);
}
