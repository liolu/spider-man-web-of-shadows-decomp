/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020ff7b0(void);
extern void func_020ff7c4(int state);
extern void func_02100104(void *dst, int value, int size);
extern void func_020fe920(void *queue);
extern void func_020fe810(void);
extern char data_0214eaa8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_02106ed4(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_02100104(&job, 0, 0x24);
        enabled = func_020ff7b0();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020fe920(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_020ff7c4(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_020ff7b0();
        done                              = job.done;
        *((char *) &data_0214eaa8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_0214eaa8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_020ff7c4(enabled);
        } else {
            func_020fe810();
            return;
        }
    }
}
