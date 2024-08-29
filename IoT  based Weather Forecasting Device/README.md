# IoT based Weather Forecasting Device using ESP8266/ NodeMCU and Arduino IoT Cloud

This project is designed to monitor temperature and humidity using the DHT11 sensor and a NodeMCU, with data sent to the Arduino IoT Cloud.

## Features

- **Real-Time Monitoring**: Continuously monitors temperature and humidity in real-time.
- **IoT Integration**: Data is uploaded to the Arduino IoT Cloud, enabling remote monitoring.
- **Arduino Compatible**: Compatible with Arduino IDE and utilizes the Arduino IoT Cloud library.

## Components

- **NodeMCU**: The main microcontroller that connects to Wi-Fi and sends data to the cloud.
- **DHT11 Sensor**: A temperature and humidity sensor that provides real-time environmental data.
- **Arduino IoT Cloud**: A cloud service that allows for easy IoT device management and data visualization.

## Setup Instructions

1. **Hardware Setup**:
    - Connect the DHT11 sensor to the NodeMCU as follows:
      - Data pin to D2.
      - VCC to 3.3V.
      - GND to GND.
      
2. **Software Setup**:
    - Install the Arduino IDE.
    - Install the required libraries: `ArduinoIoTCloud`, `Arduino_ConnectionHandler`, and `DHT`.
    - Configure your Wi-Fi credentials in the code.
    - Set up the Arduino IoT Cloud with the board ID and device key provided by Arduino IoT Cloud.
    
3. **Upload the Code**:
    - Upload the code to your NodeMCU using the Arduino IDE.

4. **Monitor Data**:
    - Use the Arduino IoT Cloud dashboard to monitor temperature and humidity data in real-time.

## Usage

- Ensure your NodeMCU is powered and connected to Wi-Fi.
- Open the Serial Monitor in the Arduino IDE to see real-time data.
- Access the Arduino IoT Cloud to view and analyze historical data.

## Credits

- **Designed by**: Prince Kumar Kushwaha
