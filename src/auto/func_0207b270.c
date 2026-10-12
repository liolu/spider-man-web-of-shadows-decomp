#include "m2c.h"

extern M2C_UNK data_021304f4;
extern M2C_UNK data_0213050c;

void func_0207b270(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213050c;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021304f4;
    M2C_FIELD(arg0, s32 *, 0x14) = 3;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x14;
}
