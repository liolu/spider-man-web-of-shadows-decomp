#include "m2c.h"

extern M2C_UNK data_0213aa44;

void func_020d9c90(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213aa44;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
