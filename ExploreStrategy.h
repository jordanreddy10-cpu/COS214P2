#ifndef EXPLORESTRATEGY_H
#define EXPLORETRATEGY_H
#include "RouteStrategy.h"


class ExploreStrategy: public RouteStrategy{
    virtual void planRoute(Place* start, Place* end);


};


#endif