/*
  Project: Arduino LED Blink QA System
  Board: Arduino Uno
  LED: Built-in LED on digital pin 13
  Behaviour: Toggle LED every 1000 ms without using delay().
*/

const uint8_t LED_PIN = 13;
const unsigned long BLINK_INTERVAL_MS = 1000;

unsigned long previousMillis = 0;
bool ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, ledState);
  Serial.begin(9600);
}

void loop() {
  const unsigned long now = millis();

  if (now - previousMillis >= BLINK_INTERVAL_MS) {
    previousMillis = now;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? "LED ON" : "LED OFF");
  }
}
