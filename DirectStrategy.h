#ifndef DIRECTSTRATEGY_H
#define DIRECTSTRATEGY_H
#include "RouteStrategy.h"


class DirectStrategy: public RouteStrategy{
    virtual void planRoute(Place* start, Place* end);


};


#endif