/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af21c from projets/dragon-ball-origins/src/donor/func_020af21c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
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
extern UnkFndList data_021483e0;
extern const s16 data_02126834[];
extern void *func_020f39e0(UnkFndList *list, void *object);
extern u32 func_021011d4(void);
extern BOOL func_02100ef8(u32 tag);
extern void func_02040a28(UnkSndSeqPlayer *player);
extern void func_020f9280(UnkSndFader *fader);
extern int func_020f924c(UnkSndFader *fader);
extern BOOL func_020f9298(UnkSndFader *fader);
extern void func_0210060c(u32 playerNo, int volume);
extern void func_02040988(UnkSndSeqPlayer *player);
extern void func_021005cc(u32 playerNo);
void func_0204056c(void) {
    u32 status              = func_021011d4();
    UnkSndSeqPlayer *player = func_020f39e0(&data_021483e0, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_020f39e0(&data_021483e0, player);

        if (!player->startedFlag) {
            if (func_02100ef8(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_02040a28(player);
        } else {
            func_020f9280(&player->fader);
            seqVol   = data_02126834[player->volume];
            initVol  = data_02126834[player->initVolume];
            groupVol = data_02126834[player->player->volume];
            volume   = data_02126834[func_020f924c(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_0210060c(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_020f9298(&player->fader)) {
                func_02040988(player);
            }
            if (player->updateFlag) {
                func_021005cc(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
