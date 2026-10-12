#include "m2c.h"

extern M2C_UNK data_0213a99c;

void func_020d9f60(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213a99c;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
