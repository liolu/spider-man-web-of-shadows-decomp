/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af6a0 from projets/dragon-ball-origins/src/donor/func_020af6a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020f3878(UnkList *list, void *obj);
extern void func_020f3980(UnkList *list, void *obj);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    struct UnkSndPlayer *player;
    struct UnkSndPlayerHeap *heap;
    UnkLink prioLink;
    UnkLink playerLink;
    UnkSndFader fader;
    u8 status;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u32 commandTag;
    u16 unk_34;
    u8 unk_36[6];
    u8 playerNo;
    u8 prio;
    u16 unk_3e;
    u8 unk_40;
    u8 unk_41;
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *player;
} UnkSndHandle;
typedef struct UnkSndPlayer {
    UnkList playerList;
    UnkList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u32 unk_20;
} UnkSndPlayer;
typedef struct UnkSndPlayerHeap {
    UnkLink link;
    void *heap;
    UnkSndSeqPlayer *seqPlayer;
    int playerNo;
} UnkSndPlayerHeap;
extern UnkList data_021483ec;
extern UnkList data_021483e0;
extern void func_02040a28(UnkSndSeqPlayer *seqPlayer);
void func_02040a28(UnkSndSeqPlayer *seqPlayer) {
    UnkSndPlayer *player;

    if (seqPlayer->handle != 0) {
        seqPlayer->handle->player = 0;
        seqPlayer->handle         = 0;
    }

    player = seqPlayer->player;
    func_020f3980(&player->playerList, seqPlayer);
    seqPlayer->player = 0;

    if (seqPlayer->heap != 0) {
        func_020f3878(&player->heapList, seqPlayer->heap);
        seqPlayer->heap->seqPlayer = 0;
        seqPlayer->heap            = 0;
    }

    func_020f3980(&data_021483e0, seqPlayer);
    func_020f3878(&data_021483ec, seqPlayer);
    seqPlayer->status = 0;
}
