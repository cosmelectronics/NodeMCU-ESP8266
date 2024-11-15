// This Code is designed by Prince Kushwaha from COSM Electronics

// Define the GPIO pins connected to the RGB LED
#define RED_PIN D1
#define GREEN_PIN D2
#define BLUE_PIN D3

void setup() {
  // Initialize the GPIO pins as output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // Set the LED to different colors
  setColor(255, 0, 0);   // Red
  delay(1000);

  setColor(0, 255, 0);   // Green
  delay(1000);

  setColor(0, 0, 255);   // Blue
  delay(1000);

  setColor(255, 255, 0); // Yellow
  delay(1000);

  setColor(0, 255, 255); // Cyan
  delay(1000);

  setColor(255, 0, 255); // Magenta
  delay(1000);

  setColor(255, 255, 255); // White
  delay(1000);
}

// Function to set the RGB color
void setColor(int red, int green, int blue) {
  analogWrite(RED_PIN, 255 - red);   // Invert for common anode
  analogWrite(GREEN_PIN, 255 - green);
  analogWrite(BLUE_PIN, 255 - blue);
}
