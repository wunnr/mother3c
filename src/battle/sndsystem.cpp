// Auto-generated source file

#include "global.h"
#include "m4a.h"
#include "battle/sndSystem.h"
#include "battle/irc.h"

extern void* gUnknown_02001F14;
extern SndSystem* gUnknown_02001F24;

void* getSndSystemRTTI(void) {
    return &gUnknown_02001F14;
}

extern "C" ASM_FUNC("asm/non_matching/sndsystem/sub_0806FD80.inc", void sub_0806FD80());

SndSystem* sub_0806FDB0() {
    return gUnknown_02001F24;
}

extern "C" ASM_FUNC("asm/non_matching/sndsystem/sub_0806FDBC.inc", void sub_0806FDBC());

void* SndSystem::getRTTI() {
    return getSndSystemRTTI();
}

extern "C" ASM_FUNC("asm/non_matching/sndsystem/sub_0806FE04.inc", void __9SndSystem());
extern "C" ASM_FUNC("asm/non_matching/sndsystem/sub_0806FE64.inc", void destructor__9SndSystem());

void SndSystem::vsyncOn() {
    m4aSoundVSyncOn();
}

void SndSystem::vsyncOff() {
    m4aSoundVSyncOff();
}

void SndSystem::setUnk20(u16 arg1){
    _20 = arg1;
    IrcManager::get()->sub_08069AF8(0xA0 - _20);
}

void SndSystem::setUnk22(u8 arg1) {
    _22 = arg1;
}

u16 SndSystem::getUnk20() {
    return _20;
}

u8 SndSystem::getUnk22() {
    return _22;
}

extern "C" void sub_0806FF04() {
    m4aSoundMain();
}

extern "C" void sub_0806FF10() {
    m4aSoundVSync();
}

extern "C" ASM_FUNC("asm/non_matching/sndsystem/sub_0806FF1C.inc", void sub_0806FF1C());
