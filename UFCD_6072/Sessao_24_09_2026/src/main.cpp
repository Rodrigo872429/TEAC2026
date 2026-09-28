#include <Arduino.h>
const int rele = 8;
const int vermelho = 10;
const int amarelo = 9;
const int verde = 6;

void setup() {
  pinMode(rele, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

  digitalWrite(rele, LOW);
}

void loop() {

  // VERDE + relé ligado
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(rele, HIGH);

  delay(5000);

  // AMARELO
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);

  delay(2000);

  // VERMELHO + relé desligado
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(rele, LOW);

  delay(5000);
}

