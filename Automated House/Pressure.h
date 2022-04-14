#ifndef PRESSURE_H
#define PRESSURE_H
#include "ISensor.h"
#include <time.h>
#include <stdlib.h>
#define MAX_P 1100//numarul maxim la care poate ajunge presiunea
class Pressure : public ISensor
{
public:
    double readSensor();
private:
    double generatePressure();
};
#endif // PRESSURE_H


