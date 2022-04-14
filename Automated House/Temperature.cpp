#include <iostream>
#include "Temperature.h"

using namespace std;

double Temperature::generateTemperature()//se genereaza o temperatura aleatorie
{
    double T;
    T = rand() % MAX_T;
    return T;
}
double Temperature::readSensor()
{
    return generateTemperature();
}


