#include "ShortestStrategy.h"

void ShortestStrategy::planRoute(Place* start, Place* end){
    std::cout << "Shortest path strategy chosen" << std::endl;
    int totalDistance = start->getDistance() + end->getDistance();//add getdistance  to place 
    std::cout << "Taking the straightest line. Total distance is " << totalDistance << "km." << std::endl;

}