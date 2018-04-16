#pragma once
#include "ballbuilder.h"
#include "stage1ball.h"
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>


class stage1BallBuilder: public ballBuilder
{
public:

    stage1BallBuilder(QJsonObject ball_info);

   void buildBallShell();
   ball* getBall();

   float getRadius(){return radius;}
   float getMass(){return mass;}
   float getXVelocity(){return x_velocity;}
   float getYVeocity(){return y_velocity;}
   float getXCoordinate(){return xCoordinate;}
   float getYCoordinate(){return yCoordinate;}
   std::string getColour(){return colour;}

   virtual ~stage1BallBuilder(){}

 private:

    QJsonObject ball_info;
    QJsonObject position;
    QJsonObject velocity;
    std::string colour;
    float radius;
    float mass;
    float x_velocity;
    float y_velocity;
    float xCoordinate;
    float yCoordinate;
};

