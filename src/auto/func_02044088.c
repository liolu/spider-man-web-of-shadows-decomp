#include "m2c.h"

extern M2C_UNK data_0212ac28;

void func_02044088(s32 *arg0, s32 *arg1) {
    *arg0 = *((M2C_UNK *) ((s8 *) &data_0212ac28 + (*arg1 * 4)));
}
