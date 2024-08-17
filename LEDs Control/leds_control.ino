// This Code is Designed by Prince Kushwaha

// Define the GPIO pins for the LEDs
#define RED_LED_PIN 14   // GPIO 14 (D5)
#define GREEN_LED_PIN 4 // GPIO 4 (D2)

void setup() {
  // Initialize the GPIO pins as outputs
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);

  // Initially turn off both LEDs
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
}

void loop() {
  // Turn on the red LED, turn off the green LED
  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(1000); // Wait for 1 second

  // Turn off the red LED, turn on the green LED
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(1000); // Wait for 1 second

  // Turn off both LEDs
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(1000); // Wait for 1 second
}
