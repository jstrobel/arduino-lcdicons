/*
  LCDIcons.h - Library for LCD-Display-Icons.
  Created by Jens Strobel
*/
#ifndef LCDIcons_h
#define LCDIcons_h

#include "Arduino.h"

class LCDIcons {
  public:
    LCDIcons();
    // Row A in Overview
    uint8_t* face_smile();
    uint8_t* face_neutral();
    uint8_t* face_whine();
    uint8_t* star();
    uint8_t* heart();
	uint8_t* thermometer();
	uint8_t* drop();
	uint8_t* note();
	uint8_t* check();
	uint8_t* lock();
	uint8_t* speaker();
	uint8_t* phone();
	uint8_t* bell();
	uint8_t* clock();
	uint8_t* hourclass();
	uint8_t* antenna();
	uint8_t* bulp();

	// Row B in Overview
    uint8_t* battery_full();
    uint8_t* battery_empty();
    uint8_t* battery_half();
	uint8_t* cursor_up();
	uint8_t* cursor_down();
	uint8_t* cursor_left();
	uint8_t* cursor_right();
};

#endif