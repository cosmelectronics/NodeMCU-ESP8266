# LEDs Control

This project demonstrates how to control two LEDs (red and green) using an ESP8266 microcontroller. The LEDs will alternate between being on and off with a 1-second delay between each change.

## Components Used
- ESP8266 Board (e.g., NodeMCU)
- Red LED
- Green LED
- Resistors (220 ohms recommended)
- Breadboard and jumper wires

## Circuit Diagram
- **Red LED**: Connected to GPIO 5 (D1) with a 220 ohm resistor.
- **Green LED**: Connected to GPIO 4 (D2) with a 220 ohm resistor.
- **Ground**: Both LEDs are grounded to GND.

## How It Works
- The red and green LEDs are alternately turned on and off with a 1-second delay.
- This cycle continues indefinitely, creating a simple blinking effect.

## How to Run
1. Connect the components as per the circuit diagram.
2. Upload the provided code to your ESP8266 board using the Arduino IDE.
3. Power up the ESP8266, and you will see the LEDs alternate between red and green.

## Author
- **Prince Kushwaha**
