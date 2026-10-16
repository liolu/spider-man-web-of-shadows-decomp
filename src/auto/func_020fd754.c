/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003594 from projets/farm-frenzy/src/donor/func_02003594.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_0214be78;
extern const u16 data_021266d4[16][3];
extern s32 func_020fbddc(void);
void func_020fd754(void) {
    s32 bank                    = func_020fbddc();
    data_0214be78.texBank       = bank;
    data_0214be78.texStartAddr  = data_021266d4[bank][0] << 12;
    data_0214be78.texStartAddr2 = data_021266d4[bank][1] << 12;
    data_0214be78.texSize1      = data_021266d4[bank][2] << 12;
}
