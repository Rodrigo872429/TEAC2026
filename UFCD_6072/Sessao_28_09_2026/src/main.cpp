#include <Arduino.h>
int temperatura;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  temperatura = analogRead(A0);

  if (temperatura > 550) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(100);
}




