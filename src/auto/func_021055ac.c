#include "m2c.h"

extern M2C_UNK data_0214e060;

s32 func_021055ac(void) {
    if (M2C_FIELD(&data_0214e060, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
