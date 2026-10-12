#include "m2c.h"

M2C_UNK func_020f408c(s32, s32);                    /* extern */
s32 func_020f4100(s32);                             /* extern */
M2C_UNK func_020fed6c(M2C_UNK *);                   /* extern */
M2C_UNK func_020fedf0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0213fd48;
extern M2C_UNK data_0213fd60;

void func_02005e8c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020fed6c(&data_0213fd48);
    func_020f408c(*((M2C_UNK *)((s8 *)&data_0213fd60 + (func_020f4100(arg0) * 0x14))), arg0);
    func_020fedf0(&data_0213fd48);
}
