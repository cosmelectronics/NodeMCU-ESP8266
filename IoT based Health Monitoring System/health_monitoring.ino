// This Code is Designed by Prince Kushwaha from COSM Electronics

#include <OneWire.h>
#include <DallasTemperature.h>
#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

#define ONE_WIRE_BUS D4      // DS18B20 data pin connected to D4
#define PULSE_SENSOR_PIN A0  // Pulse Sensor connected to A0

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const char DEVICE_LOGIN_NAME[] = "0227ee1e-e363-4671-bd8f-46d91b3a0bd4";
const char SSID[] = "Shandilya3";                       // Network SSID (name)
const char PASS[] = "shandilya003";                     // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[] = "4CbV5#5CDhgzmhOc2?Ddo8JZ8";  // Secret device password

CloudHeartRate pulse_Rate;
CloudTemperatureSensor temperature;

void initProperties() {

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(pulse_Rate, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);
}


WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void setup() {
  Serial.begin(115200);
  delay(1500);
  sensors.begin();  // Start DS18B20 sensor
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}


void loop() {
  ArduinoCloud.update();

  // Read pulse sensor value
  int pulseValue = analogRead(PULSE_SENSOR_PIN);
  Serial.print("Pulse Sensor Value: ");
  Serial.println(pulseValue);
  pulse_Rate = pulseValue;

  // // Read temperature in Celcius from DS18B20
  // sensors.requestTemperatures();
  // float temperatureC = sensors.getTempCByIndex(0);
  // Serial.print("Temperature: ");
  // Serial.print(temperatureC);
  // Serial.println(" °C");
  // temperature = temperatureC;

  // Read temperature in Fahrenheit from DS18B20

  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print("Temperature: ");
  Serial.print(temperatureF);
  Serial.println(" °F");
  temperature = temperatureF;

  delay(1000);  // Delay for 1 second
}
