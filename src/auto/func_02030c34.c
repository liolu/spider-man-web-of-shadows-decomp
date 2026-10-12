#include "m2c.h"
#include "engine.h"

void func_01ff9824(M2C_UNK, M2C_UNK);
void func_02030ed4(M2C_UNK);

void func_02030c34(s32 arg0, s32 arg1) {
    if ((M2C_FIELD(arg1, s32 *, 0) == M2C_FIELD(arg0, s32 *, 0x78)) && (M2C_FIELD(arg1, s32 *, 4) == M2C_FIELD(arg0, s32 *, 0x7C)) && (M2C_FIELD(arg1, s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x80))) {
        return;
    }
    func_01ff9824(arg0 + 0x60, arg1);
    func_02030ed4(arg0);
}
