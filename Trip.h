#ifndef TRIP_H
#define TRIP_H

#include "Place.h"
#include "RouteStrategy.h"

class Trip{
    public:
        Trip(RouteStrategy* strat, Place* startPlace, Place* endPlace);
        ~Trip();
        void setRouteStrategy(RouteStrategy* x);
        void setStart(Place* start);
        void setEnd(Place* end);

        Place* getStart();
        Place* getEnd();

        void calculateTrip();






    private:
        RouteStrategy* strategy;
        Place* startPlace;
        Place* endPlace;


};


#endif