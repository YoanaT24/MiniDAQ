#include <Arduino.h>
#include "DAQ.h"

DAQ daq; 

void setup() {

    daq.begin();

}

void loop() {
    daq.update();
}