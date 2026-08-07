#include <Arduino.h>
#include "SensorManager.h"

void SensorManager::begin()
{
    latestData.timestamp = 0;

    latestData.temperature = 0.0f;
    latestData.humidity = 0.0f;
    latestData.pressure = 0.0f;

    latestData.accelX = 0.0f;
    latestData.accelY = 0.0f;
    latestData.accelZ = 0.0f;
}

void SensorManager::update()
{
    latestData.timestamp = millis(); 

    // Simulated environmental data
    latestData.temperature = 24.0f;
    latestData.humidity = 50.0f;
    latestData.pressure = 1013.25f;

    // Simulated acceleration data
    latestData.accelX = 0.10f;
    latestData.accelY = -0.05f;
    latestData.accelZ = 9.81f;
}

SensorData SensorManager::getLatestData() const
{
    return latestData;
}