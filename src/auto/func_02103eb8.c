/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02103eb8 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/func_02103eb8.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed long s32;
typedef long long s64;
typedef struct {
    unsigned short field_00;
    unsigned short field_02;
    unsigned short field_04;
    unsigned short field_06;
} Rec;
typedef struct {
    u16 f0;
    u16 f1;
} Pair;
typedef struct {
    char pad_00[0x34];
    u16 field_34;
} Data_02046390;
extern Data_02046390 data_0214df10;
typedef struct {
    s32 aX;
    s32 pad_04;
    s32 bX;
    s32 aY;
    s32 pad_10;
    s32 bY;
} Coef;
extern Coef data_0214df2c;
void func_02103eb8(Rec *out, Rec *in) {
    if (data_0214df10.field_34 == 0) {
        *(Pair *) &out->field_00 = *(Pair *) &in->field_00;
        *(Pair *) &out->field_04 = *(Pair *) &in->field_04;
        return;
    }

    {
        Coef *coef = &data_0214df2c;

        out->field_04 = in->field_04;
        out->field_06 = in->field_06;

        if (in->field_04 == 0) {
            out->field_00 = 0;
            out->field_02 = 0;
            return;
        }

        {
            int x0    = in->field_00 << 2;
            s64 diff0 = (s64) x0 - coef->aX;
            s32 v0    = (s32) ((coef->bX * diff0) >> 22);

            out->field_00 = (u16) v0;
            if ((short) out->field_00 < 0) {
                out->field_00 = 0;
            } else if ((short) out->field_00 > 0xff) {
                out->field_00 = 0xff;
            }

            {
                int x1    = in->field_02 << 2;
                s64 diff1 = (s64) x1 - coef->aY;
                s32 v1    = (s32) ((coef->bY * diff1) >> 22);

                out->field_02 = (u16) v1;
                if ((short) out->field_02 < 0) {
                    out->field_02 = 0;
                    return;
                }
                if ((short) out->field_02 > 0xbf) {
                    out->field_02 = 0xbf;
                }
            }
        }
    }
}
