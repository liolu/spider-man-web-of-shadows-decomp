#include "m2c.h"

M2C_UNK func_020173a8(void *);                      /* extern */
M2C_UNK func_02019bd0();                            /* extern */
M2C_UNK func_0202f454(void *);                      /* extern */
M2C_UNK func_02043c5c(void *);                      /* extern */
extern M2C_UNK data_021286fc;

void *func_02016cd4(void *arg0) {
    func_02019bd0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021286fc;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x164) = -1;
    func_02043c5c(arg0 + 0x168);
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    func_0202f454(arg0 + 0x190);
    func_020173a8(arg0);
    return arg0;
}
