# IoT based Health Monitoring System

## Overview
This project interfaces a **Pulse Sensor** and **DS18B20 Temperature Sensor** with an **ESP8266 (NodeMCU)** and integrates it with **Arduino IoT Cloud**. The collected data is sent to the cloud for monitoring.

## Features
- Reads **heart rate** from the **Pulse Sensor**.
- Measures **temperature** using the **DS18B20 sensor**.
- Sends data to **Arduino IoT Cloud** for remote monitoring.
- Uses **WiFi** to establish a cloud connection.

## Components Required
- **ESP8266 NodeMCU**
- **Pulse Sensor**
- **DS18B20 Temperature Sensor**
- **10KΩ Resistor** (for DS18B20)
- **Jumper Wires**

## Connections
| Component         | ESP8266 Pin |
|------------------|------------|
| Pulse Sensor     | A0         |
| DS18B20 Data Pin | D4         |
| DS18B20 VCC      | 3.3V       |
| DS18B20 GND      | GND        |
| 10KΩ Resistor    | Between VCC & Data Pin |

## Setup Instructions
1. Connect the components as per the connection diagram.
2. Install the following Arduino libraries:
   - `OneWire`
   - `DallasTemperature`
   - `ArduinoIoTCloud`
   - `Arduino_ConnectionHandler`
3. Configure your **WiFi SSID**, **Password**, and **Arduino IoT Cloud Credentials**.
4. Upload the code to your ESP8266.
5. Monitor sensor readings on the **Serial Monitor** or **Arduino IoT Cloud Dashboard**.

## Usage
Once uploaded, the ESP8266 will continuously read the **pulse rate** and **temperature** and send the data to **Arduino IoT Cloud**. The values can be viewed on the **cloud dashboard** in real-time.

## Creator
This project is designed by Prince Kushwaha from COSM Elecronics.
