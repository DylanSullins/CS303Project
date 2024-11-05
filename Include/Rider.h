#pragma once

struct Request
{
	int floorPickup;
    int floorDestination;
    Request();
    Request(int, int);
    Request(const Request&);
};

class Rider
{
private:
	Request request;
public:
    Rider();
    Rider(Request);
    Rider(const Rider&);
    ~Rider();
    Request getRequest();
    void    setRequest(int, int);
	
};