#include "m2c.h"

extern M2C_UNK data_02145600;

s32 func_02012748(s32 arg0) {
    return (*((M2C_UNK *) ((s8 *) &data_02145600 + (arg0 * 4))) << 0x14) | 0x10;
}
