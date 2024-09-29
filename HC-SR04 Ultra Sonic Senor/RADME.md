# HC-SR04 Distance Measurement with ESP8266 and 16x2 LCD

This project demonstrates how to interface the HC-SR04 ultrasonic sensor with an ESP8266 (NodeMCU) to measure distance and display it on a 16x2 LCD screen using an I2C module.

## Features

- Measure distance using the **HC-SR04** ultrasonic sensor.
- Display the measured distance in centimeters on a **16x2 LCD** via I2C communication.
- Customizable pins for both the sensor and the LCD, compatible with **ESP8266**.
- Uses the I2C protocol for easier wiring of the LCD screen.

## Components Required

- **ESP8266 (NodeMCU)**
- **HC-SR04 Ultrasonic Sensor**
- **16x2 LCD** with **I2C Module**
- **Jumper Wires**
- **Resistors** (for voltage divider on ECHO pin if necessary)

## Pin Configuration

### ESP8266 (NodeMCU)
- **SDA (I2C)**: GPIO4 (D2)
- **SCL (I2C)**: GPIO5 (D1)
- **TRIG_PIN** (HC-SR04): GPIO14 (D5)
- **ECHO_PIN** (HC-SR04): GPIO12 (D6)

### Power Supply
- **VCC** of HC-SR04 and LCD: **5V** (VIN pin of ESP8266)
- **GND** of HC-SR04 and LCD: **GND** (common ground with ESP8266)

## Setup

1. **Wiring**: 
   - Connect the **HC-SR04** sensor’s **VCC**, **TRIG**, **ECHO**, and **GND** to the respective ESP8266 pins.
   - Use a voltage divider on the **ECHO** pin to bring the voltage down to 3.3V for ESP8266 compatibility.
   - Connect the **SDA** and **SCL** pins of the **I2C LCD** to GPIO4 (D2) and GPIO5 (D1) of the ESP8266 respectively.

2. **Libraries**: 
   Install the following libraries through the Arduino IDE:
   - `LiquidCrystal_I2C` for the 16x2 LCD
   - `Wire` library (included by default)

3. **Upload**: 
   - Upload the code to the ESP8266 using the Arduino IDE.
   - Ensure the correct **board** and **port** settings are selected.

4. **Adjustments**: 
   - Modify the I2C address in the code if the LCD doesn’t display text (default is `0x27`).
   - Adjust the contrast on the I2C module’s potentiometer if the display is not clear.

## Working

- The **HC-SR04** sensor emits ultrasonic waves, and the time it takes for the wave to return is measured by the **ECHO** pin.
- This time is converted to distance and displayed on the **LCD** in centimeters.
- The **TRIG** pin triggers the sensor, and the **ECHO** pin listens for the reflected signal.

## Schematic

Connect the components as described in the **Pin Configuration** section.

- **HC-SR04**: TRIG -> D5 (GPIO14), ECHO -> D6 (GPIO12)
- **LCD I2C**: SDA -> D2 (GPIO4), SCL -> D1 (GPIO5)
- **Power**: VIN -> 5V, GND -> GND

## License

This project is licensed under the **COSM Electronics**.

## Author

This code and project design is authored by **Prince Kumar Kushwaha**.
