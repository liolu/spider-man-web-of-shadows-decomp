#include "m2c.h"

void func_02045d94(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1B2) != 0) {
        M2C_FIELD(arg0, s8 *, 0x19E) = 1;
        M2C_FIELD(arg0, s8 *, 0x1B0) = 1;
    }
}
