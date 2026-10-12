#include "m2c.h"

s32 func_0204a6c4();                    /* extern */
s32 func_02074d54();                         /* extern */
s32 func_0208a064();                                /* extern */

s32 func_0204a78c(M2C_UNK arg0) {
    func_02074d54();
    if (func_0208a064() == 0) {
        return 0;
    }
    return func_0204a6c4(arg0, func_02074d54(arg0) + 0x20);
}
