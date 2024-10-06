// This Code is Designed by Prince Kushwaha from COSM Electronics

#include <Servo.h>  // Include the standard Servo library

Servo myServo;  // Create a Servo object
int servoPin = D1;  // Servo signal connected to GPIO5 (D1)

void setup() {
  // Attach the servo on pin D1 to the servo object
  myServo.attach(servoPin);

  // Start Serial communication for debugging
  Serial.begin(115200);
  Serial.println("Servo Motor Control with ESP8266");
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);   // Set servo to the specified angle
    delay(20);              // Wait for the servo to reach the position
  }
  
  delay(1000);  // Wait for 1 second
  
  // Sweep the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);   // Set servo to the specified angle
    delay(20);              // Wait for the servo to reach the position
  }

  delay(1000);  // Wait for 1 second
}
