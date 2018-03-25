
#pragma once
#include "motorvehicle.h"
namespace week02 {

    class Bus: public MotorVehicle
    {
        public:
        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6):
            MotorVehicle(numberOfPassengers,topSpeed,numberOfWheels,kilometresPerLitre),numberOfAirBags(numberOfAirBags=0), abs(abs), seatBeltsInstalled(seatBeltsInstalled), standingPassengersAllowed(standingPassengersAllowed){}

        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           std::string color,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6):
            MotorVehicle(numberOfPassengers,topSpeed,numberOfWheels,kilometresPerLitre,color,kilometresPerLitre),numberOfAirBags(numberOfAirBags=0), abs(abs), seatBeltsInstalled(seatBeltsInstalled), standingPassengersAllowed(standingPassengersAllowed)
         {

         }

    protected:
        int numberOfAirBags;
        bool abs;
        bool seatBeltsInstalled;
        bool standingPassengersAllowed;
    }



}
