#ifndef BATHROOM_H
#define BATHROOM_H
#include "IRoom.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"

using namespace std;

class Bathroom : public IRoom
{
public:
    void createRoom();
    void readRoom();
    void updateRoom();
    void deleteRoom();
private:
    vector<ISensor*>sensors;
};
#endif // BATHROOM_H

