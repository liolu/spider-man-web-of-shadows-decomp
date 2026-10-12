#include "m2c.h"

s32 func_02041ee8();                                /* extern */
M2C_UNK func_02041f44(M2C_UNK);                     /* extern */

s32 func_02041f68(M2C_UNK arg0) {
    if (func_02041ee8() == 0) {
        return 0;
    }
    func_02041f44(arg0);
    return 1;
}
