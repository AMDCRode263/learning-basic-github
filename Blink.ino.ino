void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // LED nyala
  delay(1000);                       // tunggu 1 detik
  digitalWrite(LED_BUILTIN, LOW);    // LED mati
  delay(1000);                       // tunggu 1 detik
}
