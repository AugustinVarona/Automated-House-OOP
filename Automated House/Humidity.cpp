#include <iostream>
#include "Humidity.h"

using namespace std;

double Humidity::generateHumidity()//se genereaza o umiditate aleatorie
{
    double H;
    H = rand() % MAX_H;
    return H;
}
double Humidity::readSensor()
{
    return generateHumidity();
}


