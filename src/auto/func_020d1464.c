#include "m2c.h"

extern M2C_UNK data_02138b7c;

void func_020d1464(void **arg0, s32 arg1) {
    *arg0 = (M2C_UNK *)((s8 *)&data_02138b7c + (arg1 * 0x10));
}
