#include "m2c.h"

u16 *func_02008344(s32 *);                          /* extern */
s32 func_02008af4();                                /* extern */
s32 func_02008d10(s32, u32, M2C_UNK);               /* extern */

s32 func_02008cd4(s32 *arg0) {
    if (func_02008af4() != 0) {
        return 0;
    }
    return func_02008d10(*arg0, (u32) (*func_02008344(arg0) << 0x1A) >> 0x1C, 0);
}
