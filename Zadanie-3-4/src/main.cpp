#include <Arduino.h>
#define PIN_G 5
#define PIN_B 6
#define PIN_R 9
 
int r,g,b;
 
void setup() {
pinMode(PIN_G, OUTPUT);
pinMode(PIN_B, OUTPUT);
pinMode(PIN_R, OUTPUT);
}
 
void loop() {
  analogWrite(PIN_R, rand());
  analogWrite(PIN_G, rand());
  analogWrite(PIN_B, rand());
  delay(1000);
}
#include <Arduino.h>
#include <avr/io.h>
#include <avr/interrupt.h>
 
int main(void) {
  DDRD &= ~(1 << DDD5);
  PORTD |= (1 << PORTD5);
  TIMSK1 |= (1 << CS12) | (1 << CS11) | (1 << CS10);
  sei();
 
  while (1){
 
  }
}
 
ISR(TIMER1_OVF_vect) {
 
}