#include "m2c.h"

s32 func_020f4950(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
extern M2C_UNK data_0214a410;
extern M2C_UNK data_0214a414;

s32 func_020f4f64(s32 arg0) {
    if (func_020f4950(&data_0214a410, &data_0214a414, (u32) (arg0 << 0x10) >> 0xD, ((u32) (arg0 & ~0xFFFF) >> 0x10) * 8) ==
        0) {
        return 1;
    }
    return 0;
}
