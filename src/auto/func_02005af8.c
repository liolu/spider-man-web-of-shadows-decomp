#include "m2c.h"

extern M2C_UNK data_02127f30;

void func_02005af8(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02127f30;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) *arg1;
}
