#include <Arduino.h>

uint8_t i = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Witaj programisto!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(i);
  delay(2000);
}