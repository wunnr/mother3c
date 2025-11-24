#include "enums.h"
#include "structs.h"
#include "gba/io_reg.h"

u16 gSectorToDirection[] = { 
  DIR_LEFT, 
  DIR_UP_LEFT, 
  DIR_UP, 
  DIR_UP_RIGHT, 
  DIR_RIGHT, 
  DIR_DOWN_RIGHT, 
  DIR_DOWN, 
  DIR_DOWN_LEFT 
};

u16 gSectorToDirectionExt[] = { 
  DIR_LEFT, 
  DIR_UP_LEFT, 
  DIR_UP, 
  DIR_UP_RIGHT, 
  DIR_RIGHT, 
  DIR_DOWN_RIGHT,
  DIR_DOWN,
  DIR_DOWN_LEFT,
  DIR_DOWN_LEFT,
  DIR_DOWN,
  DIR_NONE 
};

const Direction gDirectionTable[] = {
    {
       0,
       0,
       0,
       DIR_NONE,
       DIR_NONE,
       DIR_NONE,
       DIR_NONE,
    },
    {
       DPAD_DOWN,
       0,
       1,
       DIR_NONE,
       DIR_UP,
       DIR_RIGHT,
       DIR_LEFT,
    },
    {
       DPAD_DOWN | DPAD_LEFT,
       -1,
       1,
       DIR_DOWN,
       DIR_UP_RIGHT,
       DIR_DOWN_RIGHT,
       DIR_UP_LEFT,
    },
    {
       DPAD_LEFT,
       -1,
       0,
       DIR_DOWN_LEFT,
       DIR_RIGHT,
       DIR_DOWN,
       DIR_UP,
    },
    {
       DPAD_UP | DPAD_LEFT,
       -1,
       -1,
       DIR_LEFT,
       DIR_DOWN_RIGHT,
       DIR_DOWN_LEFT,
       DIR_UP_RIGHT,
    },
    {
       DPAD_UP,
       0,
       -1,
       DIR_UP_LEFT,
       DIR_DOWN,
       DIR_LEFT,
       DIR_RIGHT,
    },
    {
       DPAD_UP | DPAD_RIGHT,
       1,
       -1,
       DIR_UP,
       DIR_DOWN_LEFT,
       DIR_UP_LEFT,
       DIR_DOWN_RIGHT,
    },
    {
       DPAD_RIGHT,
       1,
       0,
       DIR_UP_RIGHT,
       DIR_LEFT,
       DIR_UP,
       DIR_DOWN,
    },
    {
       DPAD_DOWN | DPAD_RIGHT,
       1,
       1,
       DIR_RIGHT,
       DIR_UP_LEFT,
       DIR_UP_RIGHT,
       DIR_DOWN_LEFT,
    },
};