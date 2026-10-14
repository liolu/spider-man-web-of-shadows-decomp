#include "engine.h"
#include "m2c.h"

void func_0200ddb8(M2C_UNK);

void func_0201fa40(s32 arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x6C);
    if ((temp_r0 != NULL) && (arg1 != M2C_FIELD(temp_r0, s32 *, 8))) {
        M2C_FIELD(temp_r0, s32 *, 8) = arg1;
        if (M2C_FIELD(temp_r0, s32 *, 4) != arg1) {
            func_0200ddb8((s32) temp_r0);
            return;
        }
        temp_r1 = M2C_FIELD(temp_r0, s32 *, 0x50);
        if (temp_r1 & 1) {
            return;
        }
        if (!(temp_r1 & 0x20)) {
            M2C_FIELD(temp_r0, s32 *, 4) = -1;
        }
    }
}
