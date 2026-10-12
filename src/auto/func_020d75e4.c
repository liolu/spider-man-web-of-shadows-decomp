#include "m2c.h"

extern M2C_UNK data_0213a424;

void func_020d75e4(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213a424;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
