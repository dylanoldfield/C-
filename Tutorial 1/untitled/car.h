#pragma once
#include "motorvehicle.h"

namespace week02 {

    class Car : public MotorVehicle {
        public:
        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4):
            Motorvehicle(numberOfPassengers,topSpeed,numberOfWheels,kilometresPerLitre),numberOfAirBags(numberOfAirBags), abs(abs){}

        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            std::string color,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4):
            Motorvehicle(numberOfPassengers,topSpeed,numberOfWheels), numberOfAirBags(numberOfAirBags), abs(abs), color(color){}

        ~Car();

    protected:
        int numberOfAirBags;
        bool abs;
    }



}
