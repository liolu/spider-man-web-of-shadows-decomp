#include "m2c.h"

extern M2C_UNK data_02139fe0;

void func_020d5d6c(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02139fe0;
    M2C_FIELD(arg0, u8 *, 4)       = (u8) *arg1;
}
