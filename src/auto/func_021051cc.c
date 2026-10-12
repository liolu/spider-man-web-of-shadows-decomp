#include "m2c.h"

s32 func_021018cc(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_021051cc(s32 arg0) {
    if (func_021018cc(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
