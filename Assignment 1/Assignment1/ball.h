#pragma once
#include "vector.h"
#include <QPainter>

class ball
{
public:
    ball(){};
    virtual ~ball(){
        delete m_telemetry;
    }



    void render(QPainter& painter, unsigned int time);
    // set methods for modifying ball
    virtual void addVector(float xCoordinate,float yCoordinate, float xVelocity, float yVelocity)=0;
    virtual void setColour(std::string colour)=0;
    virtual void setMass(float mass)=0;
    virtual void setRadius(float radius)=0;
    virtual void setTelemetry(float xCoordinate,float yCoordinate, float xVelocity, float yVelocity)=0;

    //get methods for physical attributes
    virtual std::string getColour()=0;
    virtual float getRadius()=0;
    virtual float getMass()=0;
    virtual QVector2D getCoordinate()=0;
    virtual QVector2D getVelocity()=0;


protected:
    std::string m_colour;
    float m_mass;
    float m_radius;
    vector* m_telemetry;

};

