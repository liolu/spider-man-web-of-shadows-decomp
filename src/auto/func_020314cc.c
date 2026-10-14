#include "m2c.h"

M2C_UNK func_020314c0(M2C_UNK, void **, void *, M2C_UNK); /* extern */

void func_020314cc(M2C_UNK arg0, void **arg1) {
    void *sp0;
    void *temp_ip;

    temp_ip = *arg1;
    sp0     = temp_ip + M2C_FIELD(temp_ip, u8 *, 2);
    func_020314c0(arg0, &sp0, *arg1, 0);
}
