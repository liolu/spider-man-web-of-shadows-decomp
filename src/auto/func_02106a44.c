/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_021018cc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02106a44(M2C_UNK arg0) {
    if (func_021018cc(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_021018cc(0xD, arg0, 0) != 0);
}
