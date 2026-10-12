#include "m2c.h"

M2C_UNK func_01ff8540(void *);                      /* extern */
M2C_UNK func_01ffb47c(M2C_UNK *);                   /* extern */
s32 func_02016548(s32);                             /* extern */
M2C_UNK func_020f5bbc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02145960;
extern M2C_UNK data_0214596c;

void func_0201c880(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02016548(M2C_FIELD(arg0, s32 *, 0x58));
    func_01ff8540(arg0 + 8);
    M2C_FIELD(&data_02145960, s32 *, 0x10) = temp_r4;
    func_020f5bbc(0, 3, 1, 0, M2C_FIELD(arg0, s32 *, 0x6C), 0);
    func_01ffb47c(&data_0214596c);
    func_01ff8540(arg0 + 8);
    func_020f5bbc(0, 3, 3, 1, M2C_FIELD(arg0, s32 *, 0x6C), 0);
    func_01ffb47c(&data_0214596c);
}
