#include "m2c.h"
#include "engine.h"

M2C_UNK func_020fdef8(M2C_UNK);
void func_020ff618(M2C_UNK);

extern M2C_UNK data_0214c240;

void func_020ff714(void) {
    if (M2C_FIELD(&data_0214c240, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0214c240, u16 *, 0) = 1U;
    func_020ff618(1);
    M2C_FIELD(&data_0214c240, s32 *, 4) = 0;
    M2C_FIELD(&data_0214c240, s32 *, 8) = 0;
    func_020fdef8(0x10);
}
