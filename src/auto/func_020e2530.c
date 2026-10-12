#include "m2c.h"

extern M2C_UNK data_0213baf4;

void func_020e2530(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213baf4;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
