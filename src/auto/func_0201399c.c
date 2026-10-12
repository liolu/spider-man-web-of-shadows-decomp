#include "m2c.h"

M2C_UNK func_02013108();                            /* extern */
extern M2C_UNK data_021285b0;

void *func_0201399c(void *arg0) {
    func_02013108();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021285b0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
