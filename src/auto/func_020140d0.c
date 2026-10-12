#include "m2c.h"

M2C_UNK func_02013128();                            /* extern */
extern M2C_UNK data_02128590;

M2C_UNK **func_020140d0(M2C_UNK **arg0) {
    *arg0 = &data_02128590;
    func_02013128();
    return arg0;
}
