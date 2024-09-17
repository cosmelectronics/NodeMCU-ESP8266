# BMP180 Sensor with NodeMCU and Arduino IoT Cloud

This project demonstrates how to interface the BMP180 sensor with a NodeMCU (ESP8266) and upload sensor data such as **temperature**, **pressure**, and **altitude** to the **Arduino IoT Cloud**. The project enables real-time monitoring of these environmental parameters over the internet using WiFi connectivity.

## Project Overview

The project uses the **BMP180** sensor to measure:
- **Temperature** in °C
- **Pressure** in hPa
- **Altitude** in meters (calculated based on pressure)

This data is sent to the Arduino IoT Cloud, where it can be visualized and monitored remotely. The project is powered by the NodeMCU, a popular ESP8266-based WiFi development board, and leverages the cloud connectivity features provided by the **Arduino IoT Cloud**.

## Components Required

- **NodeMCU (ESP8266)**
- **BMP180 Sensor**
- **Jumper Wires**
- **Breadboard**
- **WiFi Connection**

## Features

- **Real-time Data**: Collect and upload real-time sensor readings for temperature, pressure, and altitude.
- **Arduino IoT Cloud Integration**: Sync sensor data with the Arduino IoT Cloud platform for remote monitoring.
- **WiFi Connectivity**: Utilize WiFi for seamless data transmission to the cloud.
- **Debugging**: Print real-time values to the Serial Monitor for local debugging.

## Circuit Diagram

- **BMP180 VCC** → **NodeMCU 3.3V**
- **BMP180 GND** → **NodeMCU GND**
- **BMP180 SDA** → **NodeMCU D2 (GPIO 4)**
- **BMP180 SCL** → **NodeMCU D1 (GPIO 5)**

## Arduino IoT Cloud Integration

The project uses the Arduino IoT Cloud to store and visualize the sensor data. You need to set up the following **cloud properties**:
- **Temperature** (°C)
- **Pressure** (hPa)
- **Altitude** (meters)

### How It Works

1. The **BMP180** sensor collects the environmental data.
2. The **NodeMCU** processes the data and transmits it over WiFi.
3. The data is sent to the **Arduino IoT Cloud**, where it can be monitored remotely.
4. The project supports real-time updates and can be viewed on the **Arduino IoT Dashboard**.

## Getting Started

### Prerequisites

1. **Arduino IDE**: Download and install the latest Arduino IDE.
2. **Arduino IoT Cloud Account**: Sign up for an account on [Arduino IoT Cloud](https://create.arduino.cc/iot).
3. **Required Libraries**:
   - **Adafruit BMP085 Unified**
   - **ArduinoIoTCloud**
   - **Arduino_ConnectionHandler**
   - **Adafruit Sensor**

### Steps

1. Set up the hardware as per the circuit diagram.
2. Create an IoT Thing in the **Arduino IoT Cloud** and define the necessary properties (altitude, pressure, temperature).
3. Install the required libraries in the Arduino IDE.
4. Flash the code onto the **NodeMCU**.
5. Monitor the real-time data via the Arduino IoT Cloud dashboard.

## WiFi Credentials

Ensure you update the following in the code:
- **SSID**: Your WiFi network name.
- **Password**: Your WiFi password.

```plaintext
const char SSID[] = "Your_Network_Name";   
const char PASS[] = "Your_Network_Password";
```

## Author

- **Designed by Prince Kushwaha** from **COSM Electronics**.
