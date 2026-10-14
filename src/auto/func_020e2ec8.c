#include "m2c.h"

extern M2C_UNK data_0213ba4c;

void func_020e2ec8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213ba4c;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 5)       = (u8) M2C_FIELD(arg1, u8 *, 1);
}
