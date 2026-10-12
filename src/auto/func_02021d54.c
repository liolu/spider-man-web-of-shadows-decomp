#include "m2c.h"

M2C_UNK func_02021d84();                            /* extern */
M2C_UNK func_02021dc4();                            /* extern */
s32 func_02022390(M2C_UNK);                         /* extern */
M2C_UNK func_0202255c();                            /* extern */

void func_02021d54(M2C_UNK arg0) {
    func_0202255c(arg0);
    if (func_02022390(arg0) == 0) {
        func_02021d84(arg0);
        return;
    }
    func_02021dc4(arg0);
}
