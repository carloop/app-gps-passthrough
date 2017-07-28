/* Pass through all data from USB serial to UART serial (TX/RX pins)
 */
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(MANUAL);

void setup() {
  Serial1.begin(9600);
  Serial.begin();

  const auto fixPin = D4;
  pinMode(fixPin, OUTPUT);
  digitalWrite(fixPin, HIGH);
}

void loop() {
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  while (Serial.available()) {
    Serial1.write(Serial.read());
  }
}
