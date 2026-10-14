#include "m2c.h"

extern M2C_UNK data_0213540c;

s32 func_020d0eb4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0213540c + (arg0 * 4)));
}
