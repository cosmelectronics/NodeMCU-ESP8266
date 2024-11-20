# MQ6 Gas Sensor Interface with ESP8266

This project demonstrates interfacing the **MQ6 Gas Sensor** with an **ESP8266** microcontroller to detect and monitor combustible gases such as LPG. It includes a gas leakage alert system that triggers an alarm (via an LED) if the gas concentration exceeds a predefined threshold.

## Features
- **Real-Time Monitoring**: Continuously measures gas levels using the MQ6 sensor.
- **Threshold-Based Alerts**: Alerts are triggered when gas concentration exceeds a specified level.
- **Visual Alarm**: An LED is used as an indicator for gas leakage detection.
- **Serial Output**: Displays gas concentration levels in real time on the Serial Monitor.

## Components Required
1. **ESP8266 Development Board** (e.g., NodeMCU or ESP-12E)
2. **MQ6 Gas Sensor**
3. **LED** (optional, for alarm indication)
4. **220Ω Resistor** (for LED)
5. **Jumper Wires**
6. **Breadboard**

## Circuit Diagram
1. **MQ6 Sensor**:
   - `VCC` → `3.3V` or `5V` (depending on your sensor version)
   - `GND` → `GND`
   - `AOUT` → `A0` on ESP8266

2. **LED** (Optional):
   - `Anode` → `D1` (or any GPIO pin)
   - `Cathode` → `GND` (with a 220Ω resistor in series)

## Prerequisites
- Install the **Arduino IDE** (or similar) for programming the ESP8266.
- Add ESP8266 boards to the Arduino IDE by following the [official guide](https://arduino.esp8266.com/stable/package_esp8266com_index.json).
- Allow the MQ6 sensor to preheat for a few minutes for accurate readings.

## Usage Instructions
1. **Connect the Components**: Assemble the circuit as per the circuit diagram above.
2. **Upload the Code**: Flash the provided code to your ESP8266 using the Arduino IDE.
3. **Monitor Gas Levels**: Open the Serial Monitor (baud rate: 115200) to view real-time gas concentration readings.
4. **Respond to Alerts**: Observe the LED and Serial Monitor for gas leakage warnings.

## Applications
- **Gas Leakage Detection**: Detect LPG and other combustible gases in homes, industries, or laboratories.
- **Safety Systems**: Use as part of a larger IoT-based safety and monitoring system.

## Author
This project is designed and developed by **Prince Kushwaha** from **COSM Electronics**.

## License
This project is open-source and free to use for educational and personal projects. Attribution to the original author is appreciated.
