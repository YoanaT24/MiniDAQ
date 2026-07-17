void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("MiniDAQ started");
}

void loop() {
  Serial.println("System alive");
  delay(1000);
}
