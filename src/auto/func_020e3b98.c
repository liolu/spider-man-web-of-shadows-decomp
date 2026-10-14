#include "m2c.h"

extern M2C_UNK data_0213ba84;

void func_020e3b98(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = &data_0213ba84;
    M2C_FIELD(arg1, u8 *, 4)       = (u8) M2C_FIELD(arg0, u8 *, 4);
}
