#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
#include <vector>

// Cloud and WiFi credentials
const char DEVICE_LOGIN_NAME[]  = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4";
const char SSID[]               = "Shandilya 3";    // Network SSID (name)
const char PASS[]               = "shandilya003";    // Network password
const char DEVICE_KEY[]  = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";    // Secret device password

CloudHeartRate heart_rate;  // Cloud variable for heart rate
CloudFloat hrv;             // Cloud variable for HRV

const int pulsePin = A0;    // Pulse Sensor connected to Analog Pin A0
int pulseValue = 0;         // Variable to store analog value from pulse sensor

// Variables for heartbeat and HRV calculation
int threshold = 550;        // Threshold value to detect heartbeat
std::vector<unsigned long> rrIntervals; // Vector to store RR intervals
unsigned long lastBeatTime = 0;         // Time of the last detected beat
unsigned long currentBeatTime = 0;      // Time of the current detected beat

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void initProperties(){
  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(heart_rate, READ, ON_CHANGE, NULL); // Link heart_rate to the cloud
  ArduinoCloud.addProperty(hrv, READ, ON_CHANGE, NULL);        // Link HRV to the cloud
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
  
  // Detect heartbeat if pulseValue crosses the threshold
  if (pulseValue > threshold) {
    currentBeatTime = millis();
    if (lastBeatTime != 0) { // Ignore the first beat as there's no interval yet
      unsigned long rrInterval = currentBeatTime - lastBeatTime; // Calculate RR interval
      rrIntervals.push_back(rrInterval); // Add RR interval to the list
      calculateHRV(); // Calculate HRV
    }
    lastBeatTime = currentBeatTime; // Update lastBeatTime for the next beat
    delay(200); // Debounce delay to avoid multiple detections of the same beat
  }
  
  delay(10);  // Short delay to stabilize readings
}

void calculateHRV() {
  // Calculate HRV only if we have enough RR intervals
  if (rrIntervals.size() > 1) {
    // Calculate mean of RR intervals
    float meanRR = 0;
    for (unsigned long interval : rrIntervals) {
      meanRR += interval;
    }
    meanRR /= rrIntervals.size();
    
    // Calculate standard deviation of RR intervals
    float sumOfSquares = 0;
    for (unsigned long interval : rrIntervals) {
      sumOfSquares += pow(interval - meanRR, 2);
    }
    float stddevRR = sqrt(sumOfSquares / rrIntervals.size());
    hrv = stddevRR; // Send HRV to the cloud
    
    Serial.print("Heart Rate Variability (HRV): ");
    Serial.println(hrv);
  }
}
