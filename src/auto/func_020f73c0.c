#include "m2c.h"

M2C_UNK func_020f59a8();                            /* extern */
M2C_UNK func_020fc5f0();                            /* extern */

void func_020f73c0(void) {
    func_020fc5f0();
    func_020f59a8();
    *(s32 *)0x04000600 = (*(s32 *)0x04000600 & ~0xC0000000) | 0x80000000;
}
