#ifndef SHORTESTSTRATEGY_H
#define SHORTESTSTRATEGY_H
#include "RouteStrategy.h"


class ShortestStrategy: public RouteStrategy{
    virtual void planRoute(Place* start, Place* end);


};





#endif