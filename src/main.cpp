#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(921600);
  Serial.println("Hello From the setup");
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello From the loop");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}