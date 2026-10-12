#include "m2c.h"

extern M2C_UNK data_0214df10;

s32 func_02103ff4(s32 arg0) {
    return M2C_FIELD(&data_0214df10, u16 *, 0x38) & arg0;
}
