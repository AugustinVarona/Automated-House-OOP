#include <iostream>
#include "ISensor.h"
#include "IRoom.h"
#include "House.h"
#include "Living.h"
#include "Bathroom.h"
#include "Bedroom.h"
#include "Kitchen.h"
#include "Temperature.h"

using namespace std;

int main()
{
    srand(time(NULL));
    House house;
    Bedroom bedroom;
    Living living;
    Bathroom bathroom;
    Kitchen kitchen;
    house.addRoom(bedroom);
    house.addRoom(living);
    house.addRoom(bathroom);
    house.addRoom(kitchen);
    living.createRoom();
    house.collectRoomData();
    house.viewRoomData();
    return 0;
}
