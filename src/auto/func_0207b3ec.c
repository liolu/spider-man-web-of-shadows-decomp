#include "m2c.h"

extern M2C_UNK data_0213050c;
extern M2C_UNK data_02130598;

void func_0207b3ec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213050c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130598;
    M2C_FIELD(arg0, s32 *, 0x14)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0x1E;
}
