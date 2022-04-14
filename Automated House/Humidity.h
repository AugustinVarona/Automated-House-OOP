#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "ISensor.h"
#include <time.h>
#include <stdlib.h>
#define MAX_H 100//numarul maxim la care poate ajunge umiditatea
class Humidity : public ISensor
{
public:
    double readSensor();
private:
    double generateHumidity();
};
#endif // HUMIDITY_H

