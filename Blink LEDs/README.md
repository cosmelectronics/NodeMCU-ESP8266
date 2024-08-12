# NodeMCU LED Blink Project

This project demonstrates how to control the built-in LED on a NodeMCU board using Arduino code. The LED is connected to GPIO2 (labeled as D4 on the board) and is programmed to blink on and off at one-second intervals.

## Features

- **GPIO Control**: Utilizes GPIO2 for LED control.
- **Simple LED Blink**: The LED is programmed to turn on and off repeatedly with a delay of 1 second.

## Requirements

- **Hardware**:
  - NodeMCU board (with ESP8266 microcontroller)
  - Built-in or external LED (connected to GPIO2)

- **Software**:
  - Arduino IDE with ESP8266 board support

## Setup

1. **Install the Arduino IDE**: Ensure you have the Arduino IDE installed on your computer. You can download it from the [Arduino website](https://www.arduino.cc/en/software).

2. **Add ESP8266 Board to Arduino IDE**:
   - Open the Arduino IDE.
   - Go to `File` > `Preferences`.
   - In the "Additional Boards Manager URLs" field, add this URL: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`.
   - Go to `Tools` > `Board` > `Boards Manager`.
   - Search for `ESP8266` and install the latest version.

3. **Connect Your NodeMCU**:
   - Connect your NodeMCU to your computer using a USB cable.

4. **Select the Board and Port**:
   - In the Arduino IDE, go to `Tools` > `Board` and select `NodeMCU 1.0 (ESP-12E Module)`.
   - Go to `Tools` > `Port` and select the port corresponding to your NodeMCU.

## Uploading the Code

1. **Open the Blink Sketch**: 
   - Copy and paste the provided code into the Arduino IDE.

2. **Compile and Upload**:
   - Click on the `Verify` button to compile the code.
   - Click on the `Upload` button to upload the code to the NodeMCU.

3. **Observe the LED**:
   - Once the code is uploaded, the LED connected to GPIO2 will start blinking on and off every second.

## Additional Resources

- [Arduino Getting Started Guide](https://www.arduino.cc/en/Guide/HomePage)
- [ESP8266 Community Forum](https://www.esp8266.com/)

## License

This project is open-source and available for use and modification.
