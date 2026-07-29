#include <Arduino.h>

constexpr unsigned long SERIAL_BAUD_RATE = 115200;
constexpr unsigned long MESSAGE_INTERVAL_MS = 1000;

unsigned long previousMessageTime = 0;

void setup() {
    Serial.begin(SERIAL_BAUD_RATE);

    delay(1000);
    Serial.println("MiniDAQ starting...");
}

void loop() {
    const unsigned long currentTime = millis();

    if (currentTime - previousMessageTime >= MESSAGE_INTERVAL_MS) {
        previousMessageTime = currentTime;

        Serial.print("MiniDAQ uptime: ");
        Serial.print(currentTime);
        Serial.println(" ms");
    }
}