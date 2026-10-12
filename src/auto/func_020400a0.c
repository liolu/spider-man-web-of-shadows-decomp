#include "m2c.h"

M2C_UNK func_020f8ed4();                            /* extern */
M2C_UNK func_021006ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02100ca4(M2C_UNK);                     /* extern */
M2C_UNK func_02100e60(s32);                         /* extern */
s32 func_02100ecc();                                /* extern */

void func_020400a0(void) {
    s32 temp_r4;

    func_020f8ed4();
    func_021006ec(0, 0, 0, 0);
    temp_r4 = func_02100ecc();
    func_02100ca4(1);
    func_02100e60(temp_r4);
}
