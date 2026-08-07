#pragma once
#include "SensorData.h"

class Communication
{
public:
    void begin();
    void send(const SensorData& data);
};