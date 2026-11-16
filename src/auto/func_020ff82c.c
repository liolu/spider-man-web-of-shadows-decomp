/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_020fdbec(M2C_UNK, M2C_UNK);            /* extern */

void func_020ff82c(void) {
    WaitByLoop(1);
    func_020fdbec(1, 1);
}
