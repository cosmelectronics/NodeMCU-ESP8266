// This Code is Designed by Prince Kushwaha from COSM Electronics

// Pin definitions for each segment of the 7-segment display
#define A D1
#define B D2
#define C D3
#define D D4
#define E D5
#define F D6
#define G D7

void setup() {
  // Set all segment pins as OUTPUT
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  // Initialize all segments to OFF (HIGH for common anode)
  clearDisplay();
}

void clearDisplay() {
  // Turn OFF all segments
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void display0() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}

void display1() {
  clearDisplay();
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
}

void display2() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
}

void display3() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}

void display4() {
  clearDisplay();
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void display5() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}

void display6() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(G, LOW);
}

void display7() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
}

void display8() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void display9() {
  clearDisplay();
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void loop() {
  display0();
  delay(1000);
  display1();
  delay(1000);
  display2();
  delay(1000);
  display3();
  delay(1000);
  display4();
  delay(1000);
  display5();
  delay(1000);
  display6();
  delay(1000);
  display7();
  delay(1000);
  display8();
  delay(1000);
  display9();
  delay(1000);
}
