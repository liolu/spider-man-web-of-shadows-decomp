#include "m2c.h"

M2C_UNK func_02043bcc(s32);                         /* extern */
M2C_UNK func_02043c98(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_0211957c;

s32 func_0201a824(s32 arg0) {
    func_02043c98(arg0, &data_0211957c);
    func_02043bcc(arg0 + 4);
    return arg0;
}
