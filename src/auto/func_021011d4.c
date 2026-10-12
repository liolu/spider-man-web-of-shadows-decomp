#include "m2c.h"

M2C_UNK func_020fef78(void *, M2C_UNK);             /* extern */
extern void *data_0214de00;

s32 func_021011d4(void) {
    func_020fef78(data_0214de00 + 4, 4);
    return M2C_FIELD(data_0214de00, s32 *, 4);
}
