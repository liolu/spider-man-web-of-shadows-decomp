#include "m2c.h"

extern M2C_UNK data_021321f4;

void func_02084ab8(s32 *arg0, s32 *arg1) {
    *arg0 = *((M2C_UNK *) ((s8 *) &data_021321f4 + (*arg1 * 4)));
}
