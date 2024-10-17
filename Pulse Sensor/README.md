# ESP8266 Pulse Sensor Interface

This project demonstrates how to interface a Pulse Sensor with the ESP8266 microcontroller (e.g., NodeMCU) and print the sensor's data to the Serial Monitor using the Arduino IDE.

## Components Required
- **ESP8266** (NodeMCU or similar)
- **Pulse Sensor** (e.g., Pulse Sensor Amped)
- Jumper wires

## Circuit Diagram
- **Pulse Sensor VCC** → ESP8266 **3.3V**
- **Pulse Sensor GND** → ESP8266 **GND**
- **Pulse Sensor Signal** → ESP8266 **A0** (Analog input)

## Code
The following code reads analog data from the pulse sensor connected to pin `A0` and prints the sensor values to the Serial Monitor at 115200 baud.

```cpp
// This Code is Designed by Prince Kushwaha from COSM Electronics
// Define the pin where the pulse sensor is connected
const int pulsePin = A0; // Pulse sensor connected to analog pin A0
int sensorValue = 0;

void setup() {
  // Start the serial communication
  Serial.begin(115200); // Initialize serial communication at 115200 baud
  delay(10); // Small delay to ensure everything initializes properly
}

void loop() {
  // Read the pulse sensor value
  sensorValue = analogRead(pulsePin);

  // Print the pulse sensor value to the Serial Monitor
  Serial.print("Pulse Sensor Value: ");
  Serial.println(sensorValue);

  // Small delay before reading the next value
  delay(500); // Adjust the delay based on how often you want to read the sensor
}
