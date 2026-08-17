#ifndef CHEAPESTSTRATEGY_H
#define CHEAPESTSTRATEGY_H
#include "RouteStrategy.h"


class CheapestStrategy: public RouteStrategy{
    virtual void planRoute(Place* start, Place* end);


};





#endif