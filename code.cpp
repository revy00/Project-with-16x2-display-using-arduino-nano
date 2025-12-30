#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

byte smiley[8] = {
  B00000,
  B01010,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, smiley);
  lcd.setCursor(0,0);
  lcd.print("Hello ");
  lcd.write(byte(0));
}

void loop() {
  
}
