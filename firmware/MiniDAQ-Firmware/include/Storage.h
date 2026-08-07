#pragma once
#include "SensorData.h"

class Storage
{
public:
    void begin();
    void save(const SensorData& data);
};