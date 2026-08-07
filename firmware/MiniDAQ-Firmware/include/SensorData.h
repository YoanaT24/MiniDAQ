#pragma once 
// to only include this header file once during the compilation process

struct SensorData
{
    unsigned long timestamp; // Timestamp of the data reading in milliseconds since the program started
   
    //Environmental sensor data
    float temperature; // Temperature in degrees Celsius
    float humidity;    // Relative humidity in percentage
    float pressure;    // Atmospheric pressure in hPa

    //IMU sensor data 
    float accelX; // Acceleration in the X-axis in m/s^2
    float accelY; // Acceleration in the Y-axis in m/s^2
    float accelZ; // Acceleration in the Z-axis in m/s^2};
}; 