# ESP8266 Servo Motor Control

This project demonstrates how to interface a servo motor with an ESP8266 using the standard Servo library. The servo motor is connected to the ESP8266 on GPIO5 (D1 pin) and sweeps between 0 and 180 degrees in a continuous loop.

## Requirements

- **ESP8266** (e.g., NodeMCU)
- **Servo Motor** (e.g., SG90 or similar)
- **Jumper Wires**
- **Power Supply** (Ensure enough power for the servo motor)

## Circuit Diagram

- **VCC**: Connect to the 5V pin of the ESP8266 (or external power supply if needed)
- **GND**: Connect to the GND of the ESP8266
- **Signal**: Connect to GPIO5 (D1) on the ESP8266

## Steps to Use

1. **Connect the Hardware**: Follow the circuit diagram to connect the servo motor to the ESP8266. Ensure correct connections to avoid damaging components.
2. **Install the Servo Library**: 
   - In Arduino IDE, go to **Sketch > Include Library > Manage Libraries...**
   - Search for **Servo** and install the library.
3. **Upload the Code**: Upload the provided code to your ESP8266 board using the Arduino IDE.
4. **Monitor the Serial Output**: Open the Serial Monitor at 115200 baud rate to observe debug information.

## Features

- Sweeps the servo motor from 0 to 180 degrees and back.
- Adjustable delay and angle range to suit different applications.

## Designed By

This code is designed by **Prince Kushwaha** from COSM Electronics.
