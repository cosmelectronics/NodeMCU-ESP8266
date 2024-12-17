 ## **7-Segment Display with ESP8266 (Common Anode)**  

### **Project Overview**  
This project demonstrates how to interface a **7-segment display** (common anode) with the **ESP8266 NodeMCU**. It sequentially displays numbers from **0 to 9** with a delay of 1 second between each digit. The project can be extended to various applications such as counters, timers, or displays for IoT systems.

---

### **Components Required**  
1. **ESP8266 NodeMCU**  
2. **Common Anode 7-Segment Display**  
3. **Breadboard**  
4. **Jumper Wires**  
5. **Resistor** (220 ohms)  

---

### **Circuit Diagram**  
The wiring between the **ESP8266 pins** and the **7-segment display** segments is as follows:

| **7-Segment Pin** | **ESP8266 Pin** |
|--------------------|-----------------|
| A                 | D1              |
| B                 | D2              |
| C                 | D3              |
| D                 | D4              |
| E                 | D5              |
| F                 | D6              |
| G                 | D7              |

**Common Pin**: Connect to **3.3V** for the common anode configuration.

---

### **How It Works**  
- The segments of the 7-segment display are individually controlled using **digital output pins** of the ESP8266.  
- For a **common anode display**, a segment lights up when a **LOW** signal is sent to it.  
- The display is updated to show digits **0 to 9**, with each digit displayed for **1 second**.  

---

### **Setup Instructions**  
1. Assemble the circuit as per the provided circuit diagram.  
2. Connect the ESP8266 NodeMCU to your computer.  
3. Upload the code to the ESP8266 using the **Arduino IDE** with the appropriate board settings:  
   - **Board**: NodeMCU 1.0 (ESP-12E Module)  
   - **Port**: Your COM Port  
4. Power the circuit, and the display will show numbers from **0 to 9** sequentially.  

---

### **Applications**  
- Counters (event counters, people counters).  
- Digital clocks.  
- Timers.  
- IoT display systems.  

---

### **About the Author**  
This project was designed and developed by **Prince Kushwaha** from **COSM Electronics**.  

For more projects and updates, feel free to connect! 😊  
