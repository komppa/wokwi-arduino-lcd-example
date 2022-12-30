#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 10, 9, 8, 7);


byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
  // lcd.write("Hello, World!");
}

void loop() {}