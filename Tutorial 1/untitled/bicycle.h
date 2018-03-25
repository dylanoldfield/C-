#pragma once
#include "vehicle.h"

namespace week02{
class Bicycle: public Vehicle{

public:

    ~Bicycle(){}

    Bicycle(int numberOfPassengers,
        int topSpeed,
        bool helmetUsed = false,
            int numberOfWheels = 2): Vehicle(numberOfPassengers,topSpeed,numberOfWheels), helmetUsed(helmetUsed){}

    Bicycle(int numberOfPassengers,
        int topSpeed,
        std::string color,
        bool helmetUsed = false,
            int numberOfWheels = 2): Vehicle(numberOfPassengers,topSpeed,numberOfWheels,color), helmetUsed(helmetUsed){}

    int Bicycle::getSafetyRating();



 private:
    bool helmetUsed;

    }






}
