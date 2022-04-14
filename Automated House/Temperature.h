#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "ISensor.h"
#include <time.h>
#include <stdlib.h>
#define MAX_T 85//numarul maxim la care poate ajunge temperatura
class Temperature : public ISensor
{
public:
    double readSensor();
private:
    double generateTemperature();
};
#endif // TEMPERATURE_H

