# Home Automation System with Arduino IoT Cloud

This project demonstrates how to control a 4-channel relay module using an ESP8266 (NodeMCU) and the Arduino IoT Cloud. With this setup, you can remotely control the state of connected devices (e.g., lights, fans, or other appliances) via the IoT dashboard.

## Features

- **IoT Cloud Integration**: Control the relays from anywhere using the Arduino IoT Cloud platform.
- **4-Channel Relay Control**: Independently control four devices through a relay module.
- **Real-Time Monitoring**: View the status of the relays and switches in real-time on the IoT Cloud dashboard.
- **Wi-Fi Connectivity**: Easily connect the ESP8266 to your Wi-Fi network for seamless communication with the cloud.

## Components Used

- **ESP8266/NodeMCU**: A Wi-Fi-enabled microcontroller for IoT projects.
- **4-Channel Relay Module**: Used to control high-power electrical devices.
- **Arduino IoT Cloud**: Platform for remote control and monitoring.

## Prerequisites

- **Arduino IDE**: To program the ESP8266, make sure you have installed the [Arduino IDE](https://www.arduino.cc/en/software).
- **Arduino IoT Cloud Account**: Set up an account on the [Arduino IoT Cloud](https://cloud.arduino.cc/) and create a new Thing to control your relays.
- **Wi-Fi Network**: The ESP8266 needs to connect to a Wi-Fi network for IoT Cloud communication.

## Hardware Setup

1. **ESP8266/NodeMCU Pin Connections**:
    - Connect the **IN1**, **IN2**, **IN3**, and **IN4** of the relay module to GPIO pins D1, D2, D3, and D4 of the NodeMCU respectively.
    - Connect **VCC** of the relay module to the **3.3V** pin of the ESP8266.
    - Connect **GND** of the relay module to the **GND** pin of the ESP8266.

2. **Relay Connections**:
    - Connect the devices you wish to control (such as lights or fans) to the relay module's Normally Open (NO) and Common (COM) terminals.

## Software Setup

1. **Arduino IoT Cloud Configuration**:
    - Create a new Thing on the Arduino IoT Cloud.
    - Define four properties (`switch_1`, `switch_2`, `switch_3`, and `switch_4`) as **Boolean** type and **ReadWrite** mode.
    - Link these properties to the corresponding functions in your code for relay control.

2. **Wi-Fi Credentials**:
    - Update the project with your Wi-Fi **SSID** and **password** to allow the ESP8266 to connect to the internet.

3. **Upload the Code**:
    - Use the Arduino IDE to upload the project code to your ESP8266/NodeMCU board.

## How It Works

- The relays are controlled via the Arduino IoT Cloud dashboard.
- Each relay is linked to a cloud-controlled switch (`switch_1`, `switch_2`, `switch_3`, and `switch_4`).
- When you toggle a switch in the dashboard, the corresponding relay will turn on or off, allowing you to control connected devices.

## Dashboard Example

Set up a simple dashboard on Arduino IoT Cloud with four switches that correspond to the relays. You can toggle each switch to control the connected device in real-time.

## Future Improvements

- Add feedback mechanisms such as LED indicators for relay status.
- Integrate additional sensors like temperature or humidity sensors for advanced control features.
- Expand to more channels or different types of control mechanisms.

## License

This project is open source and available under the COSM Electronics. Feel free to use and modify the code as per your requirements.
