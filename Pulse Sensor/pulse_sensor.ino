#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

// Cloud and WiFi credentials
const char DEVICE_LOGIN_NAME[]  = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4";
const char SSID[]               = "Shandilya 3";    // Network SSID (name)
const char PASS[]               = "shandilya003";    // Network password
const char DEVICE_KEY[]  = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";    // Secret device password

CloudHeartRate heart_rate;   // Cloud variable for heart rate

const int pulsePin = A0;  // Pulse Sensor connected to Analog Pin A0
int pulseValue = 0;       // Variable to store analog value from pulse sensor

// Variables for heartbeat calculation
int threshold = 550;      // Threshold value to detect heartbeat
unsigned long previousTime = 0;
unsigned long interval = 1000; // Time interval to calculate heart rate (1 second)
int beatCount = 0;        // Counter for heartbeats
int bpm = 0;              // Variable to store Beats Per Minute

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void initProperties(){
  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(heart_rate, READ, ON_CHANGE, NULL); // Link heart_rate to the cloud
}

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  delay(1500); // Wait for Serial Monitor to open
  
  initProperties(); // Initialize cloud properties
  
  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();

  pinMode(pulsePin, INPUT); // Define pulse sensor pin as input
}

void loop() {
  ArduinoCloud.update(); // Update the cloud connection
  
  pulseValue = analogRead(pulsePin); // Read pulse sensor value
  unsigned long currentTime = millis();
  
  // If pulseValue crosses the threshold, consider it as a heartbeat
  if (pulseValue > threshold) {
    beatCount++; // Increment the heartbeat count
  }

  // Every second (1000ms), calculate BPM
  if (currentTime - previousTime >= interval) {
    bpm = beatCount * 60; // Calculate BPM (beats per minute)
    heart_rate = bpm; // Send BPM to the cloud
    Serial.print("Heart Rate (BPM): ");
    Serial.println(bpm);  // Print the BPM value
    
    // Reset for the next interval
    beatCount = 0;
    previousTime = currentTime;
  }

  delay(10);  // Short delay to stabilize readings
}

void onHeartRateChange() {
  // Add code here to act upon heart_rate changes, if needed
}
