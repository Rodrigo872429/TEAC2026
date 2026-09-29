#include <Arduino.h>
const int led = 13;

unsigned long tempoAnterior = 0;
const unsigned long tempo = 5000; // 5 segundos

bool estadoLED = false;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  if (millis() - tempoAnterior >= tempo) {
    tempoAnterior = millis();

    estadoLED = !estadoLED;
    digitalWrite(led, estadoLED);
  }
}