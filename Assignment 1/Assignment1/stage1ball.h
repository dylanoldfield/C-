#pragma once
#include "ball.h"
#include "vector.h"

class stage1ball : public ball::ball
{
public:
    stage1ball(){}

    virtual ~stage1ball(){delete m_telemetry;}

    //get methods for physical attributes

    void addVector(float xCoordinate,float yCoordinate, float xVelocity, float yVelocity){
        m_telemetry = new vector(xCoordinate, yCoordinate, xVelocity, yVelocity);}
    void setColour(std::string colour){m_colour = colour;}
    void setMass(float mass){ m_mass = mass;}
    void setRadius(float radius){m_radius = radius;}
    void setTelemetry(float xCoordinate,float yCoordinate, float xVelocity, float yVelocity);

    std::string getColour();
    float getRadius();
    float getMass();
    QVector2D getCoordinate();
    QVector2D getVelocity();

};
