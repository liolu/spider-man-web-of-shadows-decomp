#include "m2c.h"

extern M2C_UNK data_02119cd0;

void func_0203134c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((u8 *) &data_02119cd0)[*M2C_FIELD(arg0, u8 **, 0)]);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}
