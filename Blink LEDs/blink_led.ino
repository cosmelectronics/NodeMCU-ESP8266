// This code is Designed by Prince Kushwaha
// Define the GPIO pin where the LED is connected.
// On the NodeMCU, the built-in LED is typically connected to GPIO2 (D4 on the board).
#define LED_PIN 2

void setup() {
  // Initialize the LED pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level).
  digitalWrite(LED_PIN, HIGH);
  // Wait for a second.
  delay(1000);

  // Turn the LED off by making the voltage LOW.
  digitalWrite(LED_PIN, LOW);
  // Wait for a second.
  delay(1000);
}
