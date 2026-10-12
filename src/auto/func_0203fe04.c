#include "m2c.h"

M2C_UNK func_02100ca4(M2C_UNK);                     /* extern */
M2C_UNK func_02100e60(s32);                         /* extern */
s32 func_02100ecc();                                /* extern */

void func_0203fe04(void) {
    s32 temp_r4;

    temp_r4 = func_02100ecc();
    func_02100ca4(1);
    func_02100e60(temp_r4);
}
