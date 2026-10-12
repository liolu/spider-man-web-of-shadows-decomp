#include "m2c.h"

M2C_UNK func_020e8278(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020e8e20(void *);                      /* extern */

void func_020e7e7c(void *arg0) {
    func_020e8278(arg0, 0x15, 0x14, 0xB, 4, 0);
    M2C_FIELD(arg0, s8 *, 0xBE) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    func_020e8e20(arg0 + 0x1C);
    func_020e8e20(arg0 + 0x64);
}
