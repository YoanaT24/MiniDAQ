
// only prints messages 
#include <Arduino.h>
#include "Logger.h"

void Logger::begin()
{
    Serial.begin(115200); // Initialize serial communication at 115200 baud rate
}

void Logger::log(const SensorData& data)
{
    Serial.println("--------------------");


    Serial.print("Timestamp: ");
    Serial.println(data.timestamp);
    Serial.println(" ms");

    Serial.println("Environmental:");
    Serial.print("Temperature: ");
    Serial.print(data.temperature);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(data.humidity);
    Serial.println(" %");

    Serial.print("Pressure: ");
    Serial.print(data.pressure);
    Serial.println(" hPa");

    Serial.println("IMU:");
    Serial.print("Acceleration X: ");
    Serial.print(data.accelX);
    Serial.println(" m/s²");

    Serial.print("Acceleration Y: ");
    Serial.print(data.accelY);
    Serial.println(" m/s²");

    Serial.print("Acceleration Z: ");
    Serial.print(data.accelZ);
    Serial.println(" m/s²");

    Serial.println();
}
