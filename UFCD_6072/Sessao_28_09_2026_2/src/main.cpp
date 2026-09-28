#include <Arduino.h>  // Importa as funções e definições da biblioteca do Arduino


// -------------------------
// DEFINIÇÃO DOS PINOS
// -------------------------

const int LED1 = 8;   // Define que o LED1 está ligado ao pino digital 8
const int LED2 = 7;   // Define que o LED2 está ligado ao pino digital 9


// -------------------------
// VARIÁVEIS DE TEMPO
// -------------------------

unsigned long anteriorLED1 = 0;  // Guarda o momento (em ms) em que o LED1 mudou pela última vez
unsigned long anteriorLED2 = 0;  // Guarda o momento (em ms) em que o LED2 mudou pela última vez


// Define o intervalo de tempo do LED1
// 1000 milissegundos = 1 segundo
const unsigned long intervaloLED1 = 1000;

// Define o intervalo de tempo do LED2
// 3000 milissegundos = 3 segundos
const unsigned long intervaloLED2 = 3000;


// -------------------------
// ESTADO DOS LEDs
// -------------------------

bool estadoLED1 = LOW;  // Guarda o estado do LED1: LOW = desligado
bool estadoLED2 = LOW;  // Guarda o estado do LED2: LOW = desligado


// -------------------------
// FUNÇÃO SETUP
// -------------------------

void setup()
{
    // Define o pino 8 como uma saída
    // OUTPUT significa que o Arduino vai enviar tensão pelo pino
    pinMode(LED1, OUTPUT);

    // Define o pino 9 como uma saída
    pinMode(LED2, OUTPUT);
}


// -------------------------
// FUNÇÃO LOOP
// -------------------------

void loop()
{
    // millis() devolve o número de milissegundos
    // que passaram desde que o Arduino foi ligado
    //
    // Por exemplo:
    // 1000 = 1 segundo
    // 2000 = 2 segundos
    // 5000 = 5 segundos
    unsigned long agora = millis();


    // -------------------------
    // CONTROLO DO LED1
    // -------------------------

    // Verifica se já passaram 1000 ms (1 segundo)
    // desde a última mudança do LED1
    if (agora - anteriorLED1 >= intervaloLED1)
    {
        // Guarda o momento atual
        // para podermos contar novamente 1 segundo
        anteriorLED1 = agora;

        // ! significa "NOT", ou seja, inverte o estado
        //
        // Se estadoLED1 = LOW
        // passa para HIGH
        //
        // Se estadoLED1 = HIGH
        // passa para LOW
        estadoLED1 = !estadoLED1;

        // Envia o novo estado para o pino 8
        // HIGH = LED ligado
        // LOW  = LED desligado
        digitalWrite(LED1, estadoLED1);
    }


    // -------------------------
    // CONTROLO DO LED2
    // -------------------------

    // Verifica se já passaram 3000 ms (3 segundos)
    // desde a última mudança do LED2
    if (agora - anteriorLED2 >= intervaloLED2)
    {
        // Guarda o momento atual
        // para podermos contar novamente 3 segundos
        anteriorLED2 = agora;

        // Inverte o estado do LED2
        //
        // LOW  -> HIGH
        // HIGH -> LOW
        estadoLED2 = !estadoLED2;

        // Envia o novo estado para o pino 9
        digitalWrite(LED2, estadoLED2);
    }
}






