#include <Arduino.h>
#include "DAQ.h"

void DAQ::begin()
{
    logger.begin();
    sensorManager.begin();
    storage.begin();
    communication.begin();

    previousTime = millis();

    Serial.println("MiniDAQ initialized.");
}

void DAQ::update()
{
    const unsigned long currentTime = millis();

    if (currentTime - previousTime >= interval)
    {
        previousTime += interval;// keep the interval constant every time even if the loop takes longer than expected

        sensorManager.update();

        const SensorData data = sensorManager.getLatestData();

        logger.log(data);
        storage.save(data);
        communication.send(data);
    }
}