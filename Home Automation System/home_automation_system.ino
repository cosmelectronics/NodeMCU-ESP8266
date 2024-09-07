// Code is Designed by Prince Kushwaha from COSM Electronics.
#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

// Relay control pin definitions
#define RELAY1 D1  // GPIO5
#define RELAY2 D2  // GPIO4
#define RELAY3 D3  // GPIO0
#define RELAY4 D4  // GPIO2

const char DEVICE_LOGIN_NAME[]  = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4";
const char SSID[]               = "Shandilya 3";    // Network SSID (name)
const char PASS[]               = "shandilya003";   // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]         = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";  // Secret device password

void onSwitch1Change();
void onSwitch2Change();
void onSwitch3Change();
void onSwitch4Change();

bool switch_1;
bool switch_2;
bool switch_3;
bool switch_4;

void initProperties() {
  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(switch_1, READWRITE, ON_CHANGE, onSwitch1Change);
  ArduinoCloud.addProperty(switch_2, READWRITE, ON_CHANGE, onSwitch2Change);
  ArduinoCloud.addProperty(switch_3, READWRITE, ON_CHANGE, onSwitch3Change);
  ArduinoCloud.addProperty(switch_4, READWRITE, ON_CHANGE, onSwitch4Change);
}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  delay(1500); // Wait for Serial Monitor
  
  // Initialize relay pins as outputs
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  // Set all relays off (HIGH for active-low relays)
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);

  // Initialize Arduino IoT Cloud
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  // Set debug message level for cloud connection
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  // Update Arduino IoT Cloud connection
  ArduinoCloud.update();
}

// Function to handle changes in Switch1
void onSwitch1Change() {
  if (switch_1) {
    Serial.println("Turning on Relay 1");
    digitalWrite(RELAY1, LOW);  // Turn on relay 1
  } else {
    Serial.println("Turning off Relay 1");
    digitalWrite(RELAY1, HIGH); // Turn off relay 1
  }
}

// Function to handle changes in Switch2
void onSwitch2Change() {
  if (switch_2) {
    Serial.println("Turning on Relay 2");
    digitalWrite(RELAY2, LOW);  // Turn on relay 2
  } else {
    Serial.println("Turning off Relay 2");
    digitalWrite(RELAY2, HIGH); // Turn off relay 2
  }
}

// Function to handle changes in Switch3
void onSwitch3Change() {
  if (switch_3) {
    Serial.println("Turning on Relay 3");
    digitalWrite(RELAY3, LOW);  // Turn on relay 3
  } else {
    Serial.println("Turning off Relay 3");
    digitalWrite(RELAY3, HIGH); // Turn off relay 3
  }
}

// Function to handle changes in Switch4
void onSwitch4Change() {
  if (switch_4) {
    Serial.println("Turning on Relay 4");
    digitalWrite(RELAY4, LOW);  // Turn on relay 4
  } else {
    Serial.println("Turning off Relay 4");
    digitalWrite(RELAY4, HIGH); // Turn off relay 4
  }
}
