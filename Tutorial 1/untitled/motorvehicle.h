#pragma once
#include "vehicle.h"

namespace week02 {
    class MotorVehicle : public Vehicle {
    public:
        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
                     double kilometresPerLitre): m_kmpl(kilometresPerLitre){}

        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            std::string color,
                     double kilometresPerLitre): m_kmpl(kilometresPerLitre){}

        virtual ~MotorVehicle();

    protected:
        double m_kmpl;

    };

