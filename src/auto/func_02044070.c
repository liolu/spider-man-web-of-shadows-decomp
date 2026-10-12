#include "m2c.h"

extern M2C_UNK data_0212abbc;

void func_02044070(s32 *arg0, s32 *arg1) {
    *arg0 = *((M2C_UNK *)((s8 *)&data_0212abbc + (*arg1 * 4)));
}
