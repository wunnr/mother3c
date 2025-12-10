#include "battle/guestFactory.h"
#include "enums.h"

extern void* (*sGuestSpawners[])(u16 id);

void GuestFactory::init() {
    for (u32 i = 0; i < 16; i++) {
        put(i, DefaultGuestFactory::create);
    }
    put(PARTY_MEMBER_THOMAS, ThomasFactory::create);
    put(PARTY_MEMBER_FUEL, FuelFactory::create);
    put(PARTY_MEMBER_ALEC, AlecFactory::create);
    put(PARTY_MEMBER_WESS, WessFactory::create);
    put(PARTY_MEMBER_FASSAD, FassadFactory::create);
    put(PARTY_MEMBER_IONIA, IoniaFactory::create);
}

void GuestFactory::put(u16 id, void* (*spawn)(u16 id)) {
    sGuestSpawners[id] = spawn;
}

void* GuestFactory::create(u16 id) {
    return sGuestSpawners[id](id);
}
