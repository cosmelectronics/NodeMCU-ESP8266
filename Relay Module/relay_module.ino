// This Code is Designed by Prince Kushwaha from COSM Electronics 

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define I2C LCD address (usually 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Relay control pins
const int relay1Pin = 0; // GPIO0 (D3)
const int relay2Pin = 2; // GPIO2 (D4)

// Relay states
bool relay1State = false; // OFF
bool relay2State = false; // OFF

// Timer variables
unsigned long previousMillis = 0;
const unsigned long interval = 5000; // 5 seconds

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Set relay pins as outputs
  pinMode(relay1Pin, OUTPUT);
  pinMode(relay2Pin, OUTPUT);

  // Default relay states
  digitalWrite(relay1Pin, HIGH); // Relays are active LOW
  digitalWrite(relay2Pin, HIGH);

  // Initialize the LCD
  lcd.init();
  lcd.backlight();

  // Welcome message
  lcd.setCursor(0, 0);
  lcd.print("Relay Control");
  delay(2000);
  lcd.clear();

  // Update initial relay status on LCD
  updateLCD();
}

void loop() {
  // Get the current time
  unsigned long currentMillis = millis();

  // Check if 5 seconds have elapsed
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // Update the timer

    // Toggle relays alternately
    if (relay1State) {
      relay1State = false;
      relay2State = true;
    } else {
      relay1State = true;
      relay2State = false;
    }

    // Update relay outputs
    digitalWrite(relay1Pin, relay1State ? LOW : HIGH);
    digitalWrite(relay2Pin, relay2State ? LOW : HIGH);

    // Update the LCD with the new states
    updateLCD();
  }
}

// Function to update the LCD with relay status
void updateLCD() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Relay C1: ");
  lcd.print(relay1State ? "ON" : "OFF");

  lcd.setCursor(0, 1);
  lcd.print("Relay C2: ");
  lcd.print(relay2State ? "ON" : "OFF");
}
