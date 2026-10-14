#include "m2c.h"

extern M2C_UNK data_0213d874;
extern M2C_UNK data_02145a48;

void func_020f3794(s32 *arg0) {
    *arg0 = ((s32 *) &data_0213d874)[((s32) (M2C_FIELD(&data_02145a48, u16 *, 2) & 0xF0) >> 4)];
}
