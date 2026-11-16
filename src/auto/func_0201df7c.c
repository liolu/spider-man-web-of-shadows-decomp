/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_020d4318(void *);                      /* extern */
extern M2C_UNK data_02128a64;

void *func_0201df7c(void *arg0, void *arg1) {
    void *var_r2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02128a64;
    M2C_FIELD(arg0, s32 *, 4)      = 0x199;
    M2C_FIELD(arg0, s32 *, 8)      = 0x672000;
    func_020d4318(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    var_r2                       = arg0 + 0x4C;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    do {
        M2C_FIELD(var_r2, s32 *, 0)   = 0;
        M2C_FIELD(var_r2, s32 *, 4)   = 0;
        M2C_FIELD(var_r2, s32 *, 8)   = 0;
        M2C_FIELD(var_r2, s32 *, 0xC) = 0;
        var_r2 += 0x10;
    } while ((u32) var_r2 < (u32) (arg0 + 0x8C));
    return arg0;
}
