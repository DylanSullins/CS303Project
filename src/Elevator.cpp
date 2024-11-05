#include "../Include/Elevator.h"

Elevator::Elevator()
{
    riders = {};
    floor = 0;
    heading = Direction::UP;
}
Elevator::~Elevator(){}

bool Elevator::isRequestDirectionSame(Request r)
{
    return (
        ( r.floorDestination > r.floorPickup && heading == Direction::UP ) 
        || ( r.floorDestination < r.floorPickup && heading == Direction::DOWN )
    );
}
void Elevator::processRequests()
{
    return;
}