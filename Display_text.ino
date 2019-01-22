///////////////////////////////////////////////////
//  I2C DisplayAdapter <---> WEMOS D1 / ESP8166  //
//         VCC pin               VIN pin         //
//         GND pin               GND pin         //
//         SDA pin                D2 pin         //
//         SDL pin                D1 pin         //
//                                               //
// Depending on Diplay, adjust I2C address       //
// Standard 0x3F or 027                          //
///////////////////////////////////////////////////

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {

  lcd.begin(16,2);
  lcd.init();

  // Turn on the backlight.
  lcd.backlight();

  // Set position of 1st line (0)
  lcd.setCursor(5, 0);
  lcd.print("HELLO");
   
  // Set position of 2nd line (1)
  lcd.setCursor(5, 1);      
  lcd.print("WORLD");
}

void loop() {
}
