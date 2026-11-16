/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_021018cc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02106774(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_021018cc(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_021018cc(0xE, arg0, 0) != 0);
}
