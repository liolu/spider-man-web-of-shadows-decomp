#include "m2c.h"

u16 *func_02008344(void *);                         /* extern */
s32 func_02008af4();                                /* extern */
M2C_UNK func_02008d24(s32, u32);                    /* extern */
M2C_UNK func_02009278(s32, s32);                    /* extern */

void func_02008c94(void *arg0) {
    if (func_02008af4() != 0) {
        func_02009278(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        return;
    }
    func_02008d24(M2C_FIELD(arg0, s32 *, 0), (u32) (*func_02008344(arg0) << 0x13) >> 0x1B);
}
