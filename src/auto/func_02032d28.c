#include "m2c.h"

extern M2C_UNK data_021294b4;

void func_02032d28(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021294b4;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) *arg1;
}
