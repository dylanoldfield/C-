#pragma once
#include <stdlib.h>
#include <QVector2D>

class vector
{
public:
    vector( float xCoordinate,float yCoordinate, float xVelocity, float yVelocity){
        coordinate.setX(xCoordinate);
        coordinate.setY(yCoordinate);
        velocity.setX(xVelocity);
        velocity.setY(yVelocity);
    }

    virtual ~vector(){}

    QVector2D coordinate;
    QVector2D velocity;


};
