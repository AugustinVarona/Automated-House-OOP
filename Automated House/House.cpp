#include <iostream>
#include "House.h"

using namespace std;

void House::addRoom(IRoom &room)
{
    rooms.push_back(&room);//se introduc in vectorul rooms camerele
    room.createRoom();//se creeaza camera
}
void House::removeRoom(int x)
{
    rooms.erase(rooms.begin() + x);//se va sterge camera a carui indice este transmis in functie
}
void House::collectRoomData()
{
    srand(time(0));//se vor genera valori diferite pentru senzori pentru fiecare camera
    for(int i = 0;i<rooms.size();i++)
    {
        rooms[i]->updateRoom();//se colecteaza datele pentru fiecare camera
    }
}
void House::viewRoomData()
{
    for(int i = 0;i < rooms.size();i++)
    {
        cout<<"Room ID: " << i <<endl;
        rooms[i]->readRoom();
    }
}


