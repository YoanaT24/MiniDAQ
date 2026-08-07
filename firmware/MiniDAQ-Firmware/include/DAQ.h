#pragma once 


#include "SensorManager.h"
#include "Logger.h"
#include "Storage.h"
#include "Communication.h"

class DAQ
{
private:
    SensorManager sensorManager;
    Logger logger;
    Storage storage;
    Communication communication;
    unsigned long previousTime = 0;
    static constexpr unsigned long interval = 100;
public:
    void begin(); // Initialize the DAQ system and all its components
    void update(); // Main loop to update sensor data, log it, store it, and communicate it
};
