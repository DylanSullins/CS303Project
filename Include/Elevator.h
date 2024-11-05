#pragma once
#include <vector>
#include "Rider.h"

enum class Direction
/*
    Enumerator for direction of elevator
    Unless Willy Wonka wants to help me 
    design the program, the only directions
    are UP and DOWN
*/
{
    UP,
    DOWN
};

class Elevator
{
private:
    std::vector<Rider> riders;
    Direction heading;
    int floor;
public:
    Elevator();
    ~Elevator();

    bool isRequestDirectionSame(Request);
    void processRequests();
    
};