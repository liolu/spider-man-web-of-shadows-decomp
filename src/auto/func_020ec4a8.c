#include "m2c.h"

extern M2C_UNK data_0213cb50;

void func_020ec4a8(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = &data_0213cb50;
    M2C_FIELD(arg1, u8 *, 4)       = (u8) M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(arg1, u8 *, 6)       = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg1, s16 *, 8)      = (s16) M2C_FIELD(arg0, s16 *, 8);
}
