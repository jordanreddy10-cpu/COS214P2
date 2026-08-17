#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H
#include "Place.h"
#include <iostream>

class RouteStrategy{
    virtual void planRoute(Place* start, Place* end) = 0;
};


#endif