/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_020fe134(); /* extern */

void func_020fe054(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_020fe134() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_020fe134(arg0, arg1, arg2, arg3) > 0);
}
