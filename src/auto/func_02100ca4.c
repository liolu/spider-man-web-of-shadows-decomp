/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02100ca4 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02100ca4.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0214c2c0;
extern SNDCommand *data_0214c2e4[8];
extern SNDCommand data_0214c5a0[0x100];
extern int func_020ff7b0(void);
extern void func_020ff7c4(int state);
extern void func_020fefb0(void *address, unsigned int size);
extern SNDCommand *func_02100ad4(int block);
extern int func_021018cc(int channel, unsigned int data, int err);
extern void func_02101060(void);
int func_02100ca4(unsigned int flags) {
    int state = func_020ff7b0();

    if (data_0214c2c0.reservedHead == 0) {
        func_020ff7c4(state);
        return 1;
    }

    if (data_0214c2c0.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_020ff7c4(state);
            return 0;
        }
        do {
            func_02100ad4(1);
        } while (data_0214c2c0.sentBlockCount >= 8);
        if (data_0214c2c0.reservedHead == 0) {
            func_020ff7c4(state);
            return 1;
        }
    }

    func_020fefb0(data_0214c5a0, sizeof(data_0214c5a0));

    if (func_021018cc(7, (unsigned int) data_0214c2c0.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_020ff7c4(state);
            return 0;
        }
        while (data_0214c2c0.sentBlockCount >= 8 || func_021018cc(7, (unsigned int) data_0214c2c0.reservedHead, 0) < 0) {
            func_020ff7c4(state);
            func_02100ad4(0);
            state = func_020ff7b0();
            func_020fefb0(data_0214c5a0, sizeof(data_0214c5a0));
            if (data_0214c2c0.reservedHead == 0) {
                func_020ff7c4(state);
                return 1;
            }
        }
    }

    data_0214c2e4[data_0214c2c0.sentRingIndex] = data_0214c2c0.reservedHead;
    data_0214c2c0.sentRingIndex++;
    if (data_0214c2c0.sentRingIndex > 8) {
        data_0214c2c0.sentRingIndex = 0;
    }
    data_0214c2c0.reservedHead = 0;
    data_0214c2c0.reservedTail = 0;
    data_0214c2c0.sentBlockCount++;
    data_0214c2c0.nextTag++;
    func_020ff7c4(state);

    if ((flags & 2) != 0) {
        func_02101060();
    }
    return 1;
}
