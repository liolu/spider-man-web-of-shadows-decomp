#include "m2c.h"

void func_02031310(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*arg1 + 0x14);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
