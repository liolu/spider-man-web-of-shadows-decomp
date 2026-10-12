#include "m2c.h"

M2C_UNK func_020fe714(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020fe9d8(void *);                      /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
M2C_UNK func_02106ec0(M2C_UNK *);                   /* extern */
extern void *data_0214eaa8;
extern M2C_UNK data_0214eaac;
extern M2C_UNK data_0214eed0;
extern M2C_UNK func_02106ed4;

void func_02106e34(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020ff7b0();
    if (data_0214eaa8 == NULL) {
        data_0214eaa8 = arg0;
        func_02106ec0(arg0 + 0xC4);
        func_02106ec0(&data_0214eaac);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020fe714(arg0, &func_02106ed4, arg0, &data_0214eed0, 0x400, 0x14);
        func_020fe9d8(arg0);
    }
    func_020ff7c4(temp_r4);
}
