#include "m2c.h"

M2C_UNK func_020fa63c(s32, s32, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_027e0828;
extern M2C_UNK data_027e0830;

void func_0201f3ec(void *arg0) {
    func_020fa63c(M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x3C),
                  M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0x1000, &data_027e0830);
    M2C_FIELD(&data_027e0828, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e0828, s32 *, 0xFC) & ~0x50);
}
