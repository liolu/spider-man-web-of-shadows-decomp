#include "m2c.h"

extern M2C_UNK data_0213aa44;

void func_020da970(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = &data_0213aa44;
    M2C_FIELD(arg1, u8 *, 4)       = (u8) M2C_FIELD(arg0, u8 *, 4);
}
