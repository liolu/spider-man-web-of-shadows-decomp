/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020fe504 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020fe504.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020fec00(OSContext *context);
extern void func_020fec4c(OSContext *context);
extern int func_020ff814(void);
extern void *func_020fea00(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0214bf20;
extern struct Globals data_0214befc;
void func_020fe504(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0214befc.rescheduleCount != 0) {
        return;
    }

    info = &data_0214bf20;
    if (data_0214befc.irqDepth != 0 || func_020ff814() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0214befc.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020fea00();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020fec00((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0214befc.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0214befc.currentThread = next;
    func_020fec4c((OSContext *) next);
}
