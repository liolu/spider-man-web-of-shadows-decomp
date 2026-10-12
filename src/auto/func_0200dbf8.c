#include "m2c.h"

M2C_UNK func_0200c704(void *);                      /* extern */
M2C_UNK func_0200dc34(void *);                      /* extern */

void func_0200dbf8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x36) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & ~0x300);
    M2C_FIELD(arg0, u8 *, 0x36) = 0U;
    func_0200c704(arg0 + 0x44);
    func_0200dc34(arg0);
}
