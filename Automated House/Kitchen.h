#ifndef KITCHEN_H
#define KITCHEN_H
#include "IRoom.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"

using namespace std;

class Kitchen : public IRoom
{
public:
    void createRoom();
    void readRoom();
    void updateRoom();
    void deleteRoom();
private:
    vector<ISensor*>sensors;
};
#endif // KITCHEN_H

