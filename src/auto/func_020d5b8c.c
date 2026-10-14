#include "m2c.h"

extern M2C_UNK data_02139ffc;

void func_020d5b8c(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02139ffc;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) *arg1;
}
