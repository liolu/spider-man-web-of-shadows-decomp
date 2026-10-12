#include "m2c.h"

extern M2C_UNK data_0213a9d4;

void func_020d9e40(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213a9d4;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
