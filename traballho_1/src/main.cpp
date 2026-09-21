#include <Arduino.h>
const int rele = 8;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {

  digitalWrite(rele, HIGH);  // Liga a fita
  delay(2000);

  digitalWrite(rele, LOW);   // Desliga a fita
  delay(2000);
}