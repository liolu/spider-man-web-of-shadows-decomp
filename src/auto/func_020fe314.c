#include "m2c.h"

extern M2C_UNK data_0214befc;

s32 func_020fe314(void) {
    return M2C_FIELD(&data_0214befc, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0214befc, s32 *, 0x20) + 1);
}
