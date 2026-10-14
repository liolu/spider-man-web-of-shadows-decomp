#include "m2c.h"

extern M2C_UNK data_021289e4;
extern void *data_02145a2c;

void func_0201de64(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021289e4;
    M2C_FIELD(arg0, void **, 4)    = (void *) data_02145a2c;
    data_02145a2c                  = arg0;
}
