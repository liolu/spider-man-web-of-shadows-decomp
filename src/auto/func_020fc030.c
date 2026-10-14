#include "m2c.h"

M2C_UNK func_020fbe68(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214be58;

void func_020fc030(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020fbe68(&data_0214be58);
}
