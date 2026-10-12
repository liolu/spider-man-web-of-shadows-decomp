#include "m2c.h"

M2C_UNK func_020fa4f0(s32, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_027e0828;
extern M2C_UNK data_027e0830;

void func_0201f32c(void *arg0) {
    func_020fa4f0(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x8C), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0x1000, &data_027e0830);
    M2C_FIELD(&data_027e0828, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e0828, s32 *, 0xFC) & ~0x50);
}
