// This Code is Designed by Prince Kushwaha

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 or 0x3F (depends on your LCD I2C module) and LCD size (16x2)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();

  // Turn on the backlight
  lcd.backlight();

  // Print the message on the LCD
  lcd.setCursor(0, 0);    // Set cursor to column 0, row 0
  lcd.print("Hello...");  // Print "Hello" on the first line
  delay(2000);            // Delay for 2 second
  lcd.clear();            // clear the LCD

  // Print the message on the LCD
  lcd.setCursor(0, 0);  // Set cursor to column 0, row 0
  lcd.print("COSM");    // Print "COSM" on the first line

  lcd.setCursor(0, 1);       // Set cursor to column 0, row 1
  lcd.print("Electronics");  // Print "Electronics" on the second line
  delay(2000);               // Delay for 2 second
  lcd.clear();               // clear the LCD
}

void loop() {
  // No need to repeatedly update the display in the loop
}
