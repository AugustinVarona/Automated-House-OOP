#include <iostream>
#include "Living.h"

using namespace std;

void Living::createRoom()
{
    ofstream living("living.txt");//se creeaza fisierul

}
void Living::readRoom()
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
void Living::updateRoom()
{
    sensors.push_back(new Temperature);
    sensors.push_back(new Humidity);
    sensors.push_back(new Pressure);
    ofstream living("living.txt");//se creeaza fisierul
    for(int i = 0;i < sensors.size();i++)
    {
        living << sensors[i] -> readSensor() << endl;//se introduc in fisier datele citite de senzori
    }
    living.close();
}
void Living::deleteRoom()
{
    remove("living.txt");//se sterge fisierul
}

