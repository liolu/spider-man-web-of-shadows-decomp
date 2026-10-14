#include "engine.h"
#include "m2c.h"

void func_02106fe8(M2C_UNK);
void func_02109aac(M2C_UNK);

extern M2C_UNK data_0214eed0;

void func_02106fc4(void) {
    func_02109aac(1);
    M2C_FIELD(&data_0214eed0, s32 *, 0xC) = 1;
    func_02106fe8(1);
}
