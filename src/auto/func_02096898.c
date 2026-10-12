#include "m2c.h"

s32 func_02096898(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x74) & 4) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s32 *, 4) & 0x8000)) {
        return 0x17;
    }
    return 0x7FFFFFFF;
}
