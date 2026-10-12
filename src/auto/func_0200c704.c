#include "m2c.h"

void func_0200c704(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) & ~0x3E00);
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) | (arg1 << 9));
}
