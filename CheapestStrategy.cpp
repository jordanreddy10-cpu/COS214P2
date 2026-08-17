#include "CheapestStrategy.h"

void CheapestStrategy::planRoute(Place* start, Place* end){
    std::cout << "Cheapest path strategy chosen" << std::endl;
    int totalcost = start->getEntranceFee() + end->getEntranceFee();//add getEntranceFee  to place 
    std::cout << "Taking the cheapest path. Total cost is R" << totalcost << std::endl;

}