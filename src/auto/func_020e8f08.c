#include "m2c.h"

M2C_UNK func_020e8138();                            /* extern */
extern M2C_UNK data_0213c994;

void *func_020e8f08(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_020e8138();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213c994;
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20)   = (s32) M2C_FIELD(arg3, s32 *, 4);
    return arg0;
}
