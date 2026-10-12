#include "m2c.h"

s32 func_02106824();                                /* extern */
s32 func_0210683c();                                /* extern */

s32 func_021067fc(void) {
    if ((func_0210683c() != 0) && (func_02106824() == 0)) {
        return 1;
    }
    return 0;
}
