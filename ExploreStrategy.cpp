#include "ExploreStrategy.h"

void ExploreStrategy::planRoute(Place* start, Place* end){
    std::cout << "Explore path strategy chosen" << std::endl;
    int exploremultiplier = 5;
    int totalDistance = (start->getDistance() + end->getDistance()) * exploremultiplier;
    std::cout << "Taking scenic route for exploration. Total distance is " << totalDistance << "km." << std::endl;

}