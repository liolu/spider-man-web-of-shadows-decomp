#include "m2c.h"

s32 func_0203d4f4(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02145cb4;
extern M2C_UNK data_02145d60;

s32 func_0203d268(void) {
    if ((func_0203d4f4(&data_02145d60) != 0) && (M2C_FIELD(&data_02145cb4, s32 *, 0xB4) != 0x16)) {
        return 1;
    }
    return 0;
}
