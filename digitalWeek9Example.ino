int ledPins[4] = { 0, 1, 2, 3 };
int ledTotal = 4;


void setup() {
  for (int i = 0; i < ledTotal; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledTotal; i++) {
    digitalWrite(ledPins[i], HIGH);
  } 
  delay(500);
  for (int i = 0; i < ledTotal; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}
