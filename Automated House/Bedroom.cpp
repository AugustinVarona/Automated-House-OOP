#include <iostream>
#include "Bedroom.h"

using namespace std;

void Bedroom::createRoom()
{
    ofstream bedroom("bedroom.txt");//se creeaza fisierul

}
void Bedroom::readRoom()
{
    int j=0;
    cout<< "Sensor ID\tSensor Type\tValue Registered" << endl;
    for(int i =0 ;i<sensors.size();i++)
    {
        cout<<i<<"\t\t";
        switch(j)
        {
            case 0:cout<<"Temperature\t\t";break;
            case 1:cout<<"Humidity\t\t";break;
            case 2:cout<<"Pressure\t\t";break;

        }
        cout<<sensors[i]->readSensor();//se afiseaza valorile citite de senzori
         switch(j)
        {
            case 0:cout<<(unsigned char) 248<<"C\t\t";break;//(unsigned char) 248 - afiseaza simbolul de grade
            case 1:cout<<"%\t\t";break;
            case 2:cout<<"hPa\t\t";break;
        }
        if(++j == 3)
            j=0;
        cout<<endl;

    }
}
void Bedroom::updateRoom()
{
    sensors.push_back(new Temperature);
    sensors.push_back(new Humidity);
    sensors.push_back(new Pressure);
    ofstream bedroom("bedroom.txt");//se creeaza fisierul
    for(int i = 0;i < sensors.size();i++)
    {
        bedroom << sensors[i] -> readSensor() << endl;//se introduc in fisier datele citite de senzori
    }
    bedroom.close();
}
void Bedroom::deleteRoom()
{
    remove("bedroom.txt");//se sterge fisierul
}

