#include "m2c.h"

M2C_UNK func_0200ab64(s32);                         /* extern */
M2C_UNK func_0200abd0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0210f5a4(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0200ab10;
extern M2C_UNK func_0200ab28;

s32 func_0200aab8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0210f5a4(arg0, 2, 0x24, &func_0200ab10, &func_0200ab28);
    func_0200ab64(arg0);
    func_0200abd0(arg0, arg1, arg2, arg3);
    return arg0;
}
