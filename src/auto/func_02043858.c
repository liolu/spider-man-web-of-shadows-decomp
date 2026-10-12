#include "m2c.h"

M2C_UNK func_020438cc(void *);                      /* extern */
M2C_UNK func_021006ec(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02100ca4(M2C_UNK);                     /* extern */
M2C_UNK func_02100e60(s32);                         /* extern */
s32 func_02100ecc();                                /* extern */
M2C_UNK func_02104a7c(void *);                      /* extern */
M2C_UNK func_02104a94(void *);                      /* extern */

void func_02043858(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_021006ec(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02104a7c(arg0 + 8);
        func_02104a94(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5 = func_02100ecc();
        func_02100ca4(1);
        func_02100e60(temp_r5);
    }
    func_020438cc(arg0);
}
