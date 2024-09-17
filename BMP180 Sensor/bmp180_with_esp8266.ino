// Code is Designed by Prince Kushwaha from COSM Electronics.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

const char DEVICE_LOGIN_NAME[]  = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4";

const char SSID[]               = "Shandilya 3";    // Network SSID (name)
const char PASS[]               = "shandilya003";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";    // Secret device password

CloudLength altitude;        // Altitude in meters
CloudPressure pressure;      // Pressure in hPa
CloudTemperature temperature; // Temperature in °C

// Create an instance of the BMP180 sensor
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(altitude, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(pressure, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Initialize BMP180 sensor
  if (!bmp.begin()) {
    Serial.println("Could not find a valid BMP180 sensor, check wiring!");
    while (1);
  }
  
  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update(); // Update the cloud properties
  
  // Get sensor readings
  sensors_event_t event;
  bmp.getEvent(&event);

  if (event.pressure) {
    // Get temperature
    float temp;
    bmp.getTemperature(&temp);
    temperature = temp;  // Update cloud temperature
    
    // Calculate altitude (default sea level pressure is 1013.25 hPa)
    float alt = bmp.pressureToAltitude(1013.25, event.pressure);
    altitude = alt; // Update cloud altitude

    // Update cloud pressure
    pressure = event.pressure;
    
    // Print the values to Serial Monitor for debugging
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println(" °C");

    Serial.print("Pressure: ");
    Serial.print(event.pressure);
    Serial.println(" hPa");

    Serial.print("Altitude: ");
    Serial.print(alt);
    Serial.println(" m");

    Serial.println(); // Newline for readability
  }

  // Add a small delay before taking another reading
  delay(1000);
}
