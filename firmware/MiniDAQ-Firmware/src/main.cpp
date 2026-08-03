#include <Arduino.h>
unsigned long previousTime = 0; 
unsigned long interval = 1000; 

void setup() {
    Serial.begin(115200);

    delay(1000);

    Serial.println("MiniDAQ starting...");
}

void loop() {
    unsigned long currentTime = millis();
    if (currentTime - previousTime >= interval) {
        previousTime = currentTime;
        Serial.println("MiniDAQ is running");
    }
}