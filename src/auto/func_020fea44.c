/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020ff7b0(void);
extern void func_020ff7c4(int);
extern void func_020fe45c(void *);
extern void func_020fe504(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_0214befc;
extern Node data_0214bf30;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020fea44(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0214befc.head;
    intr = func_020ff7b0();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_0214bf30) {
        func_020ff7c4(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0214befc.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_020fe45c(target);
        func_020fe504();
    }
    func_020ff7c4(intr);
    return 1;
}
