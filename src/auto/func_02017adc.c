#include "m2c.h"

s32 func_02015390();                                /* extern */

s32 func_02017adc(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 4);
    if (temp_r1 == 0) {
        return 0;
    }
    if (((u32) temp_r1 < 0x1FU) || ((M2C_FIELD(arg0, s32 *, 0x10) != 0) && (func_02015390() != 0))) {
        return 2;
    }
    return 1;
}
