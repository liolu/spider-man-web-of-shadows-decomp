#include "m2c.h"

extern M2C_UNK data_0211e4cc;

void func_020d13d0(void **arg0, s32 arg1) {
    *arg0 = (M2C_UNK *)((s8 *)&data_0211e4cc + (arg1 * 0x10));
}
