#include "m2c.h"

M2C_UNK func_021055c8(u16);                         /* extern */
M2C_UNK func_021055e4(u16);                         /* extern */
extern s32 data_0214de9c;

s32 func_02103410(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_021055c8((u16) data_0214de9c);
            return 0;
        case 10:
            func_021055e4((u16) data_0214de9c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
