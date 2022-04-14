#include <iostream>
#include "Pressure.h"

using namespace std;

double Pressure::generatePressure()//se genereaza o presiune aleatorie
{
    double P;
    P = rand() % MAX_P;
    return P;
}
double Pressure::readSensor()
{
    return generatePressure();
}


