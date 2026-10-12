#include "m2c.h"

extern void *data_02145c5c;

s32 func_020dd664(void) {
    if (M2C_FIELD(data_02145c5c, u8 *, 0x54) != 0) {
        return 0x697;
    }
    if (M2C_FIELD(data_02145c5c, s32 *, 0x18) == 0) {
        return 0x698;
    }
    return 0x696;
}
