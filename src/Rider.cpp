#include "../Include/Rider.h"

Request::Request() : floorPickup(0), floorDestination(0) {}
Request::Request(int p, int d) : floorPickup(p), floorDestination(d) {}
Request::Request(const Request& o) : floorPickup(o.floorPickup), floorDestination(o.floorDestination) {}

Rider::Rider() : request(0,0) {}
Rider::Rider(Request r) : request(r) {}
Rider::Rider(const Rider& o) : request(o.request) {}
Rider::~Rider(){}

Request Rider::getRequest(){return request;}
void Rider::setRequest(int p, int d)
{
    request.floorPickup = p;
    request.floorDestination = d;
}