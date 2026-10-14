#include "m2c.h"

M2C_UNK func_02019bd0();                            /* extern */
M2C_UNK func_02019cec(void *, s32 *);               /* extern */
extern M2C_UNK data_021287ec;

void *func_02017a0c(void *arg0) {
    s32 sp0;

    func_02019bd0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021287ec;
    M2C_FIELD(arg0, s16 *, 8)      = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0xC)    = 2;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    sp0                            = 0;
    func_02019cec(arg0, &sp0);
    return arg0;
}
