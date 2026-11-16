/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020fe28c();                                /* extern */
extern M2C_UNK data_0214e8c8;
extern M2C_UNK data_0214e8cc;

void func_021067c4(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_0214e8cc, 0x05000001);
    M2C_FIELD(&data_0214e8c8, s16 *, 6) = func_020fe28c();
}
