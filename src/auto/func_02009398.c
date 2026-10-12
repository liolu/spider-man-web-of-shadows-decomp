#include "m2c.h"

M2C_UNK func_02009a48(void *, s32, s32);            /* extern */
extern M2C_UNK data_021282bc;

void *func_02009398(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021282bc;
    func_02009a48(arg0, M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x34));
    return arg0;
}
