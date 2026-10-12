#include "m2c.h"

s32 func_020756fc(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x44) != 0xFFFF) {
        return 1;
    }
    return 0;
}
