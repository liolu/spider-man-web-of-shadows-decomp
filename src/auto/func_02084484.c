#include "m2c.h"

extern M2C_UNK data_021309d0;

void func_02084484(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021309d0;
    M2C_FIELD(arg0, u8 *, 4) = (u8) *arg1;
}
