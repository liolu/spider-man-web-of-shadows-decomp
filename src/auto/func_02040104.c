#include "m2c.h"

extern M2C_UNK data_02148854;

void func_02040104(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02148854 + (arg0 * 0x24))) = arg1;
}
