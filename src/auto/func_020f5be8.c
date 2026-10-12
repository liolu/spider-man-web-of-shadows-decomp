#include "m2c.h"

M2C_UNK func_020f972c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_027e0828;
extern M2C_UNK data_027e0874;
extern M2C_UNK data_027e0928;

M2C_UNK *func_020f5be8(void) {
    if (!(M2C_FIELD(&data_027e0828, s32 *, 0xFC) & 8)) {
        func_020f972c(&data_027e0874, &data_027e0928);
        M2C_FIELD(&data_027e0828, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e0828, s32 *, 0xFC) | 8);
    }
    return &data_027e0928;
}
