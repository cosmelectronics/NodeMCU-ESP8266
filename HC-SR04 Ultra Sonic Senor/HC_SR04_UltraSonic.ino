// This Code is Designed by Prince Kushwaha

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define the HC-SR04 pins (reassigned to avoid conflicts)
#define TRIG_PIN D5 // GPIO14 on NodeMCU
#define ECHO_PIN D6 // GPIO12 on NodeMCU

// Initialize the LCD, set the address to 0x27 and dimensions 16x2
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize I2C communication with specified SDA and SCL pins
  Wire.begin(D2, D1); // SDA = D2 (GPIO4), SCL = D1 (GPIO5)

  // Set the TRIG_PIN as an OUTPUT and ECHO_PIN as an INPUT
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Initialize the LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("HC-SR04 Sensor");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");

  // Give some time for the setup
  delay(2000);
  lcd.clear();
}

void loop() {
  // Clear the TRIG_PIN by setting it LOW for 2 microseconds
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Trigger the sensor by setting the TRIG_PIN HIGH for 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the ECHO_PIN, returns the sound wave travel time in microseconds
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance in centimeters
  long distance = (duration / 2) / 29.1;

  // Display the distance on the LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm");

  // Short delay before the next measurement
  delay(500);
}
