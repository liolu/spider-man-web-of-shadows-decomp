#include "m2c.h"

extern s32 data_0213fe48;
extern u8 data_02145884;

s32 func_0201658c(void) {
    if ((data_02145884 == 0) && (data_0213fe48 != 0)) {
        return 1;
    }
    return 0;
}
