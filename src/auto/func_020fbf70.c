#include "m2c.h"

M2C_UNK func_020fbe68(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214be4e;

void func_020fbf70(void) {
    *(s32 *)0x04000000 &= ~0x40000000;
    func_020fbe68(&data_0214be4e);
}
