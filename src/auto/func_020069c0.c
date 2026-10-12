#include "m2c.h"

s32 func_0200c4d0(M2C_UNK, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_0213fe00;

s32 func_020069c0(M2C_UNK arg0) {
    if (func_0200c4d0(arg0, M2C_FIELD(&data_0213fe00, s32 *, 4), 0x400) == 0) {
        return M2C_FIELD(&data_0213fe00, s32 *, 4);
    }
    return 0;
}
