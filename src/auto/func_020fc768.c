/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002c10 from projets/farm-frenzy/src/donor/func_02002c10.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_020fc768(void);
extern void func_020fca40(volatile void *fifo);
void func_020fc768(void) {
    func_020fca40(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
extern void func_020fca40(register volatile void *fifo);
