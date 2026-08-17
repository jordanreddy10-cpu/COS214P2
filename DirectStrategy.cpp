#include "DirectStrategy.h"

void DirectStrategy::planRoute(Place* start, Place* end){
    std::cout << "Direct path strategy chosen" << std::endl;
    std::cout << "Taking a direct path to "<< end->getName() << " from " << start->getName() << std::endl; //add getname function to place

}