### RGB LED Control with ESP8266 (NodeMCU)  

Control an RGB LED using the ESP8266 (NodeMCU) to display various colors through PWM signals. This project demonstrates how to set up and program the ESP8266 to create dynamic lighting effects with an RGB LED.  

---

## Features  
- Displays **7 vibrant colors**: Red, Green, Blue, Yellow, Cyan, Magenta, and White.  
- Simple fade effects between colors for smooth transitions.  
- Compatible with both common anode and common cathode RGB LEDs.  
- Adjustable delay to control the speed of color changes.  

---

## Components Required  
1. **ESP8266 (NodeMCU)**  
2. **RGB LED** (common anode or common cathode)  
3. **Resistors** (330 ohms or appropriate value for the LED)  
4. **Breadboard**  
5. **Jumper wires**  

---

## Circuit Diagram  
1. Connect the common pin of the RGB LED to:  
   - **GND** for common cathode.  
   - **3.3V** for common anode.  
2. Connect the red, green, and blue pins of the RGB LED to the following GPIO pins on the ESP8266 through resistors:  
   - **Red**: D1  
   - **Green**: D2  
   - **Blue**: D3  

---

## Setup Instructions  
1. **Install Arduino IDE**:  
   Ensure you have the Arduino IDE installed with the ESP8266 board manager configured.  

2. **Connect the Hardware**:  
   - Wire the RGB LED to the ESP8266 as per the circuit diagram.  
   - Use resistors to prevent damage to the LED.  

3. **Upload the Code**:  
   - Copy the code (available in the repository) to the Arduino IDE.  
   - Select the correct board (NodeMCU 1.0) and COM port.  
   - Upload the code to the ESP8266.  

4. **Power the ESP8266**:  
   - Power the board using USB or an external power source.  
   - Observe the LED displaying the programmed colors.  

---

## Customization  
- Adjust the delay between color transitions by modifying the `delay()` values in the code.  
- Experiment with custom RGB values to create new colors.  
- Add new patterns like fading effects or color cycles.  

---

## Applications  
- DIY ambient lighting.  
- LED-based decorative projects.  
- Learning PWM and RGB color mixing with microcontrollers.  

---

## Troubleshooting  
- Ensure correct connections for the common anode or cathode type RGB LED.  
- Use appropriate resistors to prevent LED damage.  
- Verify the GPIO pins defined in the code match your connections.  

---

## License  
This project is open-source and available under the COSM Electronics.  

---

Feel free to contribute to the project by submitting pull requests or reporting issues!
