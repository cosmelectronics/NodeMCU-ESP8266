# Pulse Sensor with ESP8266 and Arduino IoT Cloud

This project demonstrates how to interface a Pulse Sensor with an ESP8266 (NodeMCU) and connect it to the Arduino IoT Cloud to monitor heart rate (BPM) remotely. The Pulse Sensor reads heart rate signals, and the ESP8266 sends the BPM data to the Arduino IoT Cloud where it can be viewed and analyzed in real-time.

## Features
- **Real-time Heart Rate Monitoring**: The Pulse Sensor captures heart rate data, which is processed by the ESP8266.
- **Cloud Connectivity**: The project uses the Arduino IoT Cloud to visualize the heart rate remotely.
- **Wireless Communication**: The ESP8266 connects to a Wi-Fi network to send heart rate data to the cloud.
- **Heartbeat Detection**: A threshold value is used to detect each heartbeat from the analog signal provided by the Pulse Sensor.

## Components Used
- **ESP8266 (NodeMCU)**: A microcontroller with built-in Wi-Fi to connect the sensor to the cloud.
- **Pulse Sensor**: A sensor that detects heart rate based on the pulse signal from a person’s finger or earlobe.
- **Arduino IoT Cloud**: Cloud service to remotely monitor and visualize heart rate data.

## Hardware Setup
- **Pulse Sensor**:
  - **VCC** → ESP8266 **3.3V**
  - **GND** → ESP8266 **GND**
  - **Signal** → ESP8266 **A0** (Analog Pin)

Ensure proper power supply and stable connections to avoid erroneous readings.

## Prerequisites
- **Arduino IDE**: Ensure you have the latest version of the Arduino IDE installed.
- **ESP8266 Board Package**: Install the ESP8266 board package in the Arduino IDE. Go to `File > Preferences` and add the following URL in "Additional Boards Manager URLs":
  ```
  http://arduino.esp8266.com/stable/package_esp8266com_index.json
  ```
  Then, go to `Tools > Board > Boards Manager` and install the **ESP8266** package.
- **Arduino IoT Cloud Setup**: You need to configure an Arduino IoT Cloud account and create a "Thing" for this project. Ensure you have your **Device Login Name** and **Secret Device Key** ready.

## Steps to Get Started
1. **Set up Arduino IoT Cloud**:
   - Log in to the [Arduino IoT Cloud](https://create.arduino.cc/iot).
   - Create a new "Thing" for the ESP8266.
   - Add a property for the heart rate (e.g., `heart_rate` of type **CloudHeartRate**).

2. **Configure WiFi**:
   - Update the project with your WiFi credentials (SSID and Password).
   - Ensure your ESP8266 can connect to your Wi-Fi network.

3. **Upload the Code**:
   - Open the project in Arduino IDE.
   - Select the appropriate board (`NodeMCU 1.0 (ESP-12E Module)`).
   - Compile and upload the code to your ESP8266.

4. **Monitor Heart Rate**:
   - Once the ESP8266 is connected, you can view real-time heart rate data in the Arduino IoT Cloud dashboard.
   - You can also open the Serial Monitor to observe the BPM values locally.

## Applications
- **Health Monitoring**: Real-time heart rate tracking for health applications.
- **IoT Projects**: Integrating sensors and cloud services for remote health monitoring.
- **Wearable Technology**: Can be adapted for wearable heart rate sensors.

## Troubleshooting
- Ensure that your Wi-Fi credentials are correctly entered.
- Check the threshold value for heartbeat detection. If readings are inaccurate, you might need to fine-tune the threshold based on the environment and noise level.
- Verify that your ESP8266 is receiving stable power and the sensor is correctly connected.

## License
This project is open-source and available under the COSM Electronics.
