#include "m2c.h"

M2C_UNK func_02040a28(void *);                      /* extern */
M2C_UNK func_02100584(u8);                          /* extern */
M2C_UNK func_0210060c(u8, s32);                     /* extern */

void func_02040988(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0210060c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02100584(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02040a28(arg0);
}
