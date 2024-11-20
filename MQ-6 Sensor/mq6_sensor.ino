// This Code is Designed by Prince Kushwaha from COSM Electronics

#define MQ6_PIN A0 // Analog pin to which MQ6 is connected
#define LED_PIN D1 // Digital pin for LED (optional for alarm)

// Gas threshold (adjust based on experimentation)
#define GAS_THRESHOLD 300

void setup() {
  Serial.begin(115200);
  pinMode(MQ6_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("MQ6 Gas Sensor Initialized.");
}

void loop() {
  int gasValue = analogRead(MQ6_PIN); // Read analog value from MQ6
  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  // Check if gas concentration exceeds threshold
  if (gasValue > GAS_THRESHOLD) {
    Serial.println("Danger! Gas leakage detected!");
    digitalWrite(LED_PIN, HIGH); // Turn on LED (Alarm)
  } else {
    digitalWrite(LED_PIN, LOW); // Turn off LED
  }

  delay(1000); // Wait for 1 second
}
