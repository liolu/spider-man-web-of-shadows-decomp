#include "m2c.h"

M2C_UNK func_02019bd0();                            /* extern */
M2C_UNK func_02019cec(void *, s32 *);               /* extern */
extern M2C_UNK data_021288fc;

void *func_0201bf18(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;

    func_02019bd0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021288fc;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) *arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg2;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0x1F;
    M2C_FIELD(arg0, s16 *, 0x14)   = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    sp0                            = 2;
    func_02019cec(arg0, &sp0);
    return arg0;
}
