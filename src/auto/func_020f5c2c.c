#include "m2c.h"

M2C_UNK func_020f96f8(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_020f972c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020f9ab8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_027e0828;
extern M2C_UNK data_027e0874;
extern M2C_UNK data_027e08e4;
extern M2C_UNK data_027e0958;
extern M2C_UNK data_027e0988;

void func_020f5c2c(void) {
    func_020f9ab8(&data_027e08e4, &data_027e0874, &data_027e0958);
    func_020f96f8(&data_027e0958, &data_027e0958, M2C_FIELD(&data_027e0828, s32 *, 0xEC), M2C_FIELD(&data_027e0828, s32 *, 0xF0), M2C_FIELD(&data_027e0828, s32 *, 0xF4));
    func_020f972c(&data_027e0958, &data_027e0988);
}
