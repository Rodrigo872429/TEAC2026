#include <Arduino.h>
const int pot = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(pot);

  Serial.print("Valor: ");
  Serial.println(valor);

  delay(100);
}




