#include "m2c.h"

s32 func_020fbe40();                                /* extern */
extern M2C_UNK data_0214be5c;

void func_020fd698(void) {
    M2C_FIELD(&data_0214be5c, s32 *, 0x18) = func_020fbe40();
}
