#ifndef IROOM_H
#define IROOM_H
class IRoom
{
public:
    virtual void createRoom() = 0;//functie virtual pura
    virtual void readRoom() = 0;//functie virtual pura
    virtual void updateRoom() = 0;//functie virtual pura
    virtual void deleteRoom() = 0;//functie virtual pura
};
#endif // IROOM_H

