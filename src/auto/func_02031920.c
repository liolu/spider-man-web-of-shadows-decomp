#include "engine.h"
#include "m2c.h"

M2C_UNK func_02030fc0(M2C_UNK);

s32 func_02031920(s32 arg0) {
    void *temp_r0;

    temp_r0 = *(M2C_UNK *) arg0;
    if (M2C_FIELD(temp_r0, s32 *, 8) == 0) {
        return 0;
    }
    return (s32) M2C_FIELD((void *) func_02030fc0((s32) temp_r0), u8 *, 0xD);
}
