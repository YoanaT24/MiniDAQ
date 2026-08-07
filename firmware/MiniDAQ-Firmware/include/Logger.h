// Logger receives one SensorData object at a time and prints it in readable format
#pragma once

#include "SensorData.h"

class Logger
{
public:
    void begin();
    void log(const SensorData& data); // const - doesn't modify the measurement
};