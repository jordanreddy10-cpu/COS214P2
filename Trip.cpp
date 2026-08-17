#include "Trip.h"



Trip::Trip(RouteStrategy* strat, Place* startPlace, Place* endPlace){
    this->strategy = strat;
    this->startPlace = startPlace;
    this->endPlace = endPlace;

}

Trip::~Trip(){
    delete this->strategy;
}

void Trip::setRouteStrategy(RouteStrategy* x){
    this->strategy = x;
}

void Trip::setStart(Place* start){
    this->startPlace = start;
}

void Trip::setEnd(Place* end){
    this->endPlace = end;
}

Place* Trip::getStart(){
    return this->startPlace;
}

Place* Trip::getEnd(){
    return this->endPlace;
}

void Trip::calculateTrip(){
    this->strategy->planRoute(this->startPlace, this->endPlace);
}

