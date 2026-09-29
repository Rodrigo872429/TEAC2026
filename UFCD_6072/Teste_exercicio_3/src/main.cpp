#include <Arduino.h>
const int led = 13;

unsigned long tempoAnterior = 0;
const unsigned long intervalo = 5000; // 5 segundos

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  if (millis() - tempoAnterior >= intervalo) {
    tempoAnterior = millis();

    digitalWrite(led, !digitalRead(led));
  }
}
