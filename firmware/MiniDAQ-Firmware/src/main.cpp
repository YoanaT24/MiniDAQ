#include <Arduino.h>

void setup() {
    Serial.begin(115200);

    delay(1000);

    Serial.println("MiniDAQ starting...");
}

void loop() {
    Serial.println("MiniDAQ is running");

    delay(1000);
}