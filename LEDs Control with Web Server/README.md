# ESP8266 Web Server Project

This project demonstrates how to create a simple web server using the ESP8266 microcontroller. The web server allows users to control GPIO pins on the ESP8266 through a web interface. 

## Features

- **Wi-Fi Connectivity**: Connects to a Wi-Fi network using specified SSID and password.
- **Web Server**: Runs a web server on port 80, which serves a simple HTML page.
- **GPIO Control**: Provides on/off control for two GPIO pins (GPIO14 and GPIO4) via the web interface.
- **Real-Time State Display**: Displays the current state of the GPIO pins on the web page.

## Components

- **ESP8266**: Microcontroller used to host the web server and control the GPIO pins.
- **GPIO Pins**: GPIO14 and GPIO4 are used as output pins to control connected devices.

## Setup

1. **Connect Hardware**: Connect your devices to GPIO14 (D5) and GPIO4 (D2) on the ESP8266.
2. **Configure Wi-Fi**: Replace the placeholder SSID and password in the code with your Wi-Fi credentials.
3. **Upload Code**: Upload the code to your ESP8266 using the Arduino IDE.
4. **Connect to Wi-Fi**: The ESP8266 will connect to the specified Wi-Fi network.
5. **Access the Web Server**: Once connected, access the web server using the IP address displayed in the Serial Monitor.

## Web Interface

- **GPIO Control**: The web page displays buttons to turn GPIO14 and GPIO4 on or off.
- **State Display**: The current state (on/off) of each GPIO pin is displayed next to the corresponding button.

## Usage

1. Power on the ESP8266 and ensure it is connected to your Wi-Fi network.
2. Open a web browser and enter the IP address of the ESP8266.
3. Use the buttons on the web page to control the devices connected to GPIO14 and GPIO4.

## Example Web Interface

When you access the web server, you will see a page similar to the following:
```
ESP8266 Web Server

GPIO 14 - State [on/off]
[ON/OFF Button]

GPIO 4 - State [on/off]
[ON/OFF Button]
```

## License

*This code is designed by Prince Kushwaha.*
