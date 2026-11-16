/* compiler: 2.0/sp1p5 -flag no-global_optimizer */
#include "m2c.h"

M2C_UNK func_020e8138();                            /* extern */
extern M2C_UNK data_0213c940;

void *func_020e8950(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4, s32 arg5, s32 arg6) {
    func_020e8138();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213c940;
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20)   = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24)   = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2C)   = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x30)   = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x34)   = arg5;
    M2C_FIELD(arg0, s32 *, 0x38)   = arg6;
    M2C_FIELD(arg0, s32 *, 0x3C)   = -1;
    M2C_FIELD(arg0, s32 *, 0x40)   = -1;
    M2C_FIELD(arg0, s32 *, 0x44)   = -1;
    return arg0;
}
