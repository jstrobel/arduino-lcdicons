/*
  LCDIcons.h - Library for LCD-Display-Icons.
  Created by Jens Strobel
*/
#include "LCDIcons.h"

LCDIcons::LCDIcons() {}

uint8_t* LCDIcons::face_smile() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B10001;
  icon[2] = B00000;
  icon[3] = B00000;
  icon[4] = B00000;
  icon[5] = B10001;
  icon[6] = B01110;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::face_neutral() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B10001;
  icon[2] = B00000;
  icon[3] = B00000;
  icon[4] = B00000;
  icon[5] = B11111;
  icon[6] = B00000;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::face_whine() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B10001;
  icon[2] = B00000;
  icon[3] = B00000;
  icon[4] = B00000;
  icon[5] = B01110;
  icon[6] = B10001;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::star() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00100;
  icon[2] = B00100;
  icon[3] = B11111;
  icon[4] = B01110;
  icon[5] = B01010;
  icon[6] = B10001;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::heart() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B01010;
  icon[3] = B11111;
  icon[4] = B11111;
  icon[5] = B01110;
  icon[6] = B00100;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::thermometer() {
  static byte icon[8];
  icon[0] = B01110;
  icon[1] = B01010;
  icon[2] = B01010;
  icon[3] = B01010;
  icon[4] = B01110;
  icon[5] = B11111;
  icon[6] = B11111;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::drop() {
  static byte icon[8];
  icon[0] = B00100;
  icon[1] = B00100;
  icon[2] = B01010;
  icon[3] = B01010;
  icon[4] = B10001;
  icon[5] = B10001;
  icon[6] = B10001;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::note() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00011;
  icon[2] = B00101;
  icon[3] = B01001;
  icon[4] = B01001;
  icon[5] = B01011;
  icon[6] = B11011;
  icon[7] = B11000;
  return icon;
}

uint8_t* LCDIcons::check() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B00000;
  icon[3] = B00001;
  icon[4] = B00010;
  icon[5] = B10100;
  icon[6] = B01000;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::lock() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B01110;
  icon[2] = B10001;
  icon[3] = B10001;
  icon[4] = B11111;
  icon[5] = B11011;
  icon[6] = B11011;
  icon[7] = B11111;
  return icon;
}

uint8_t* LCDIcons::speaker() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00110;
  icon[2] = B01010;
  icon[3] = B10011;
  icon[4] = B10011;
  icon[5] = B01010;
  icon[6] = B00110;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::phone() {
  static byte icon[8];
  icon[0] = B00110;
  icon[1] = B01110;
  icon[2] = B01100;
  icon[3] = B01000;
  icon[4] = B01000;
  icon[5] = B01100;
  icon[6] = B01110;
  icon[7] = B00110;
  return icon;
}

uint8_t* LCDIcons::bell() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00100;
  icon[2] = B01110;
  icon[3] = B01110;
  icon[4] = B01110;
  icon[5] = B11111;
  icon[6] = B00100;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::clock() {
  static byte icon[8];
  icon[0] = B01110;
  icon[1] = B10001;
  icon[2] = B10101;
  icon[3] = B10101;
  icon[4] = B10111;
  icon[5] = B10001;
  icon[6] = B10001;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::hourclass() {
  static byte icon[8];
  icon[0] = B11111;
  icon[1] = B01110;
  icon[2] = B01010;
  icon[3] = B00100;
  icon[4] = B00100;
  icon[5] = B01010;
  icon[6] = B01110;
  icon[7] = B11111;
  return icon;
}

uint8_t* LCDIcons::antenna() {
  static byte icon[8];
  icon[0] = B11111;
  icon[1] = B10101;
  icon[2] = B10101;
  icon[3] = B01110;
  icon[4] = B00100;
  icon[5] = B00100;
  icon[6] = B00100;
  icon[7] = B00100;
  return icon;
}

uint8_t* LCDIcons::bulp() {
  static byte icon[8];
  icon[0] = B01110;
  icon[1] = B10001;
  icon[2] = B10101;
  icon[3] = B10101;
  icon[4] = B01110;
  icon[5] = B01010;
  icon[6] = B01110;
  icon[7] = B00100;
  return icon;
}

// Row B in Overview
uint8_t* LCDIcons::battery_full() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00100;
  icon[2] = B01110;
  icon[3] = B01110;
  icon[4] = B01110;
  icon[5] = B01110;
  icon[6] = B01110;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::battery_empty() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00100;
  icon[2] = B01110;
  icon[3] = B01010;
  icon[4] = B01010;
  icon[5] = B01010;
  icon[6] = B01010;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::battery_half() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00100;
  icon[2] = B01110;
  icon[3] = B01010;
  icon[4] = B01010;
  icon[5] = B01110;
  icon[6] = B01110;
  icon[7] = B01110;
  return icon;
}

uint8_t* LCDIcons::cursor_up() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B00000;
  icon[3] = B00100;
  icon[4] = B01110;
  icon[5] = B11111;
  icon[6] = B00000;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::cursor_down() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B00000;
  icon[3] = B11111;
  icon[4] = B01110;
  icon[5] = B00100;
  icon[6] = B00000;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::cursor_left() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B00010;
  icon[3] = B00110;
  icon[4] = B01110;
  icon[5] = B00110;
  icon[6] = B00010;
  icon[7] = B00000;
  return icon;
}

uint8_t* LCDIcons::cursor_right() {
  static byte icon[8];
  icon[0] = B00000;
  icon[1] = B00000;
  icon[2] = B01000;
  icon[3] = B01100;
  icon[4] = B01110;
  icon[5] = B01100;
  icon[6] = B01000;
  icon[7] = B00000;
  return icon;
}