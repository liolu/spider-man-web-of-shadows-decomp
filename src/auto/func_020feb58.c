/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_0214befc;
extern u32 func_020ff7b0(void);
extern void func_020ff7c4(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 func_020feb58(void) {
    u32 savedState = func_020ff7b0();
    u32 count      = 0;

    if (data_0214befc.rescheduleCount != 0) {
        count                         = data_0214befc.rescheduleCount;
        data_0214befc.rescheduleCount = count - 1;
    }
    func_020ff7c4(savedState);
    return count;
}
