/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af168 from projets/dragon-ball-origins/src/donor/func_020af168.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
typedef struct {
    UnkFndList playerList;
    UnkFndList heapList;
    u32 playableSeqCount;
    u32 allocSize;
    u8 volume;
    u8 unk_21[3];
} UnkSndPlayerGroupState;
extern UnkFndList data_021483ec;
extern UnkFndList data_021483e0;
extern UnkSndSeqPlayer data_021483f8[16];
extern UnkSndPlayerGroupState data_02148838[32];
extern void func_020f3834(UnkFndList *list, u16 offset);
extern void func_020f3878(UnkFndList *list, void *object);
void func_020404b8(void) {
    int i;
    UnkSndSeqPlayer *player;
    UnkSndPlayerGroupState *group;

    func_020f3834(&data_021483e0, 0x14);
    func_020f3834(&data_021483ec, 0x14);

    player = data_021483f8;
    for (i = 0; i < 16; i++, player++) {
        player->status   = 0;
        player->playerNo = i;
        func_020f3878(&data_021483ec, player);
    }

    group = data_02148838;
    for (i = 0; i < 32; i++, group++) {
        func_020f3834(&group->playerList, 0xc);
        func_020f3834(&group->heapList, 0);
        group->volume           = 0x7f;
        group->playableSeqCount = 1;
        group->allocSize        = 0;
    }
}
