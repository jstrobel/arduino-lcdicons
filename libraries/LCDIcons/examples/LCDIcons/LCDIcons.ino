#include <LiquidCrystal.h>
#include <LCDIcons.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

LCDIcons icons;

void setup() {
  // Initialize icons
  lcd.createChar(0, icons.face_smile());
  lcd.createChar(1, icons.antenna());
  lcd.createChar(2, icons.bulp());
  lcd.createChar(3, icons.star());
  lcd.createChar(4, icons.heart());
  lcd.createChar(5, icons.check());
  lcd.createChar(6, icons.battery_full());
  // Initialize display
  lcd.begin(20, 4);  
  // Write icons to display
  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.setCursor(2, 0);
  lcd.write(byte(1));
  lcd.setCursor(4, 0);
  lcd.write(byte(2));
  lcd.setCursor(6, 0);
  lcd.write(byte(3));
  lcd.setCursor(8, 0);
  lcd.write(byte(4));
  lcd.setCursor(10, 0);
  lcd.write(byte(5));
}

void loop() {}