// Code is Designed by Prince Kushwaha.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

//include DHT library
#include "DHT.h"

#define DHTPIN D2  //Connect DHT11 data pin with the D2 of the NodeMCU
#define DHTTYPE DHT11

//DHT11 Temperate sensor object
DHT dht(DHTPIN, DHTTYPE);


const char DEVICE_LOGIN_NAME[] = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4"; //Replace this with your device login name

const char SSID[] = "Shandilya 3";                      // Replace with Network SSID (name)
const char PASS[] = "shandilya003";                     // Replace with Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[] = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";  // Replace this with Secret device password of your device


CloudTemperature temperature;
CloudRelativeHumidity humidity;

void initProperties() {

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(humidity, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);
}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);


void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  dht.begin();  //to start dht11 sensor

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

// code for temp and humidity
void DHT_SENSOR_READ() {
  float h = dht.readHumidity();
  //read temperature as Celsius
  float t = dht.readTemperature();

  temperature = t;
  humidity = h;

  Serial.print("Temperature: ");
  Serial.println(t);

  Serial.print("Humidity: ");
  Serial.println(h);
}

void loop() {
  ArduinoCloud.update();
  // Your code here
  DHT_SENSOR_READ();
}
