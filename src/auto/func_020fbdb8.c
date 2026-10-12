#include "m2c.h"

M2C_UNK func_020fbd60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214be50;

void func_020fbdb8(void) {
    *(s32 *)0x04000000 &= ~0x80000000;
    func_020fbd60(&data_0214be50);
}
