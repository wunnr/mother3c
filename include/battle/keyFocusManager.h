#ifndef BATTLE_KEY_FOCUS_MANAGER_H
#define BATTLE_KEY_FOCUS_MANAGER_H

#include "base.h"
#include "gba/m4a_internal.h"

class KeyFocusManager : public Base {};

class KeyFocuser : public Base {
public:
    KeyFocuser();
    virtual ~KeyFocuser();
};

struct Sound : Base {
    Sound(u16 idx);
    virtual ~Sound();

    void play(bool fade_in);
    bool isPlaying();

    u16 idx;
    MusicPlayer* player;
    u32 _28;
    u32 _2c;
    u8 _30;
    u32 _34;
};

#endif  // BATTLE_KEY_FOCUS_MANAGER_H
