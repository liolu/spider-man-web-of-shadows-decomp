#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_0203d564(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d580(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d5b8(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_020ed52c(void *);                      /* extern */
extern M2C_UNK data_0213cdf0;

void *func_020ecc10(void *arg0) {
    u8 sp4[8];
    s32 sp0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213cdf0;
    if (M2C_FIELD(arg0, u8 *, 0xC0) != 0) {
        func_0203d564(sp4);
        sp0 = 0x130;
        func_0203d5b8(sp4, &sp0, 0);
        func_0203d580(sp4);
    }
    func_020ed52c(arg0);
    func_02006188(arg0);
    return arg0;
}
