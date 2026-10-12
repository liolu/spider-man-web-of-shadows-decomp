#include "m2c.h"

extern M2C_UNK data_0213a440;

void func_020d73cc(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213a440;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
