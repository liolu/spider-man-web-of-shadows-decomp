#include "m2c.h"

extern void *data_02148cb8;

s32 func_020410bc(u32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(data_02148cb8, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0x10);
}
