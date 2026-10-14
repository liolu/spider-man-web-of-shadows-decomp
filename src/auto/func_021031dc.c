#include "m2c.h"

s32 func_02102990(void *, M2C_UNK);                 /* extern */

s32 func_021031dc(void *arg0) {
    if (func_02102990(arg0, 8) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xE;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x30);
    return 1;
}
