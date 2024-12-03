# Relay Control with ESP8266 and I2C LCD

This project demonstrates the use of an ESP8266 microcontroller to control a 2-channel relay module, while displaying the relay status on a 16x2 LCD with I2C. The relays alternate their states every 5 seconds, ensuring that only one relay is ON at a time.

## Features

- **Relay Control**: Two relays connected to the ESP8266 are toggled alternately, with a delay of 5 seconds between state changes.
- **LCD Display**: A 16x2 LCD with an I2C interface is used to show the current status of each relay.
- **Non-Blocking Timer**: The project uses a non-blocking timer (`millis()`), allowing for efficient state management without halting other operations.

## Components Used

- **ESP8266**: The main microcontroller used for relay control and I2C communication.
- **2-Channel Relay Module**: Used to control external devices or loads.
- **16x2 LCD with I2C Module**: Displays the status of the relays (ON/OFF).
- **Power Supply**: Ensure proper power delivery to the ESP8266 and peripherals.

## Connections

### ESP8266 Pinout

| Component                | ESP8266 Pin |
|--------------------------|-------------|
| Relay 1 Control (IN1)    | GPIO0 (D3)  |
| Relay 2 Control (IN2)    | GPIO2 (D4)  |
| I2C LCD SDA              | GPIO4 (D2)  |
| I2C LCD SCL              | GPIO5 (D1)  |
| Power (VCC)              | 3.3V/5V     |
| Ground (GND)             | GND         |

### Circuit Diagram
Refer to the provided circuit diagram for detailed connections.

## Working

1. **Initialization**: The ESP8266 initializes the relay pins and sets up the LCD.
2. **Relay Toggling**: Every 5 seconds, the relays toggle their states alternately. Relay 1 is ON while Relay 2 is OFF, and vice versa.
3. **Status Display**: The LCD shows the current status of both relays, updating in real time.

## Applications

- Home automation systems
- Smart energy management
- Industrial control systems
- Educational projects

## Author

**Prince Kushwaha**  
This project was designed and implemented by Prince Kushwaha from **COSM Electronics**.
