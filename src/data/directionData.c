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
		/* BUTTON_COMBO */ 0,
		/*    X_VEL     */ 0,
		/*    Y_VEL     */ 0,
		/*   PREVIOUS   */ DIR_NONE,
		/*   OPPOSITE   */ DIR_NONE,
		/* TURN_LEFT90  */ DIR_NONE,
		/* TURN_RIGHT90 */ DIR_NONE
	},
	{
		/* BUTTON_COMBO */ DPAD_DOWN,
		/*    X_VEL     */ 0,
		/*    Y_VEL     */ 1,
		/*   PREVIOUS   */ DIR_NONE,
		/*   OPPOSITE   */ DIR_UP,
		/* TURN_LEFT90  */ DIR_RIGHT,
		/* TURN_RIGHT90 */ DIR_LEFT
	},
	{
		/* BUTTON_COMBO */ DPAD_DOWN | DPAD_LEFT,
		/*    X_VEL     */ -1,
		/*    Y_VEL     */ 1,
		/*   PREVIOUS   */ DIR_DOWN,
		/*   OPPOSITE   */ DIR_UP_RIGHT,
		/* TURN_LEFT90  */ DIR_DOWN_RIGHT,
		/* TURN_RIGHT90 */ DIR_UP_LEFT
	},
	{
		/* BUTTON_COMBO */ DPAD_LEFT,
		/*    X_VEL     */ -1,
		/*    Y_VEL     */ 0,
		/*   PREVIOUS   */ DIR_DOWN_LEFT,
		/*   OPPOSITE   */ DIR_RIGHT,
		/* TURN_LEFT90  */ DIR_DOWN,
		/* TURN_RIGHT90 */ DIR_UP
	},
	{
		/* BUTTON_COMBO */ DPAD_UP | DPAD_LEFT,
		/*    X_VEL     */ -1,
		/*    Y_VEL     */ -1,
		/*   PREVIOUS   */ DIR_LEFT,
		/*   OPPOSITE   */ DIR_DOWN_RIGHT,
		/* TURN_LEFT90  */ DIR_DOWN_LEFT,
		/* TURN_RIGHT90 */ DIR_UP_RIGHT
	},
	{
		/* BUTTON_COMBO */ DPAD_UP,
		/*    X_VEL     */ 0,
		/*    Y_VEL     */ -1,
		/*   PREVIOUS   */ DIR_UP_LEFT,
		/*   OPPOSITE   */ DIR_DOWN,
		/* TURN_LEFT90  */ DIR_LEFT,
		/* TURN_RIGHT90 */ DIR_RIGHT
	},
	{
		/* BUTTON_COMBO */ DPAD_UP | DPAD_RIGHT,
		/*    X_VEL     */ 1,
		/*    Y_VEL     */ -1,
		/*   PREVIOUS   */ DIR_UP,
		/*   OPPOSITE   */ DIR_DOWN_LEFT,
		/* TURN_LEFT90  */ DIR_UP_LEFT,
		/* TURN_RIGHT90 */ DIR_DOWN_RIGHT
	},
	{
		/* BUTTON_COMBO */ DPAD_RIGHT,
		/*    X_VEL     */ 1,
		/*    Y_VEL     */ 0,
		/*   PREVIOUS   */ DIR_UP_RIGHT,
		/*   OPPOSITE   */ DIR_LEFT,
		/* TURN_LEFT90  */ DIR_UP,
		/* TURN_RIGHT90 */ DIR_DOWN
	},
	{
		/* BUTTON_COMBO */ DPAD_DOWN | DPAD_RIGHT,
		/*    X_VEL     */ 1,
		/*    Y_VEL     */ 1,
		/*   PREVIOUS   */ DIR_RIGHT,
		/*   OPPOSITE   */ DIR_UP_LEFT,
		/* TURN_LEFT90  */ DIR_UP_RIGHT,
		/* TURN_RIGHT90 */ DIR_DOWN_LEFT
	}
};