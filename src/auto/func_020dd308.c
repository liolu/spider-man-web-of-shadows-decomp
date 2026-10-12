#include "m2c.h"

M2C_UNK func_020d93b8(void *, s32);                 /* extern */
extern M2C_UNK data_0213b1f4;

void *func_020dd308(void *arg0) {
    func_020d93b8(arg0, 0x5BB);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b1f4;
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
    return arg0;
}
