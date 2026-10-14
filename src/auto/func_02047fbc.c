#include "m2c.h"

M2C_UNK func_02014030(s32 *, s32);                  /* extern */
s32 func_02014054(s32);                             /* extern */
s32 func_020fa844(s32, s32);                        /* extern */
extern M2C_UNK data_0212b4f0;

void func_02047fbc(void *arg0) {
    s32 sp0;

    func_02014030(&sp0, arg0 + 0x218);
    M2C_FIELD(arg0, s32 *, 0x364) =
        func_020fa844(*((M2C_UNK *) ((s8 *) &data_0212b4f0 + (M2C_FIELD(arg0, s32 *, 0x14) << 6))) << 0xC,
                      (func_02014054(arg0 + 0x218) << 0xC) - sp0);
}
