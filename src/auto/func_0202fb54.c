#include "m2c.h"

M2C_UNK func_02043bcc(s32);                         /* extern */
M2C_UNK func_02043c98(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_021199d4;

s32 func_0202fb54(s32 arg0) {
    func_02043c98(arg0, &data_021199d4);
    func_02043bcc(arg0 + 4);
    return arg0;
}
