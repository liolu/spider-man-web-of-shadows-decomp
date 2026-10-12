#include "m2c.h"

M2C_UNK func_02043bcc(s32);                         /* extern */
M2C_UNK func_02043c98(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_02119564;

s32 func_020178c8(s32 arg0) {
    func_02043c98(arg0, &data_02119564);
    func_02043bcc(arg0 + 4);
    return arg0;
}
