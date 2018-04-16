
#include "stage1ballbuilder.h"

stage1BallBuilder::stage1BallBuilder(QJsonObject ball_info): ball_info(ball_info)
{
    if(this->ball_info.contains("colour") && ball_info["colour"].isString())
    {
        this->colour = ball_info["colour"].toString().toStdString();
    }

    if(this->ball_info.contains("position") && ball_info["position"].isObject())
    {
        this->position = ball_info["position"].toObject();

        if(this->position.contains("x") && position["x"].isDouble())
        {
            this->xCoordinate = (float)position["x"].toDouble();
        }

        if(this->position.contains("y") && position["y"].isDouble())
        {
            this->yCoordinate = (float)position["y"].toDouble();
        }
    }

    if(this->ball_info.contains("velocity") && ball_info["velocity"].isObject())
    {
        this->velocity = ball_info["velocity"].toObject();

        if(this->velocity.contains("x") && velocity["x"].isDouble())
        {
            this->x_velocity = (float)velocity["x"].toDouble();
        }

        if(this->velocity.contains("y") && velocity["y"].isDouble())
        {
            this->y_velocity = (float)velocity["y"].toDouble();
        }
    }

    if(this->ball_info.contains("mass") && ball_info["mass"].isDouble())
    {
        this->mass = (float)ball_info["mass"].toDouble();
    }

    if(this->ball_info.contains("radius") && ball_info["radius"].isDouble())
    {
        this->radius = (float)ball_info["radius"].toDouble();
    }

}

void stage1BallBuilder::buildBallShell()
{
    bal = new stage1ball();
    bal->addVector(xCoordinate,yCoordinate,x_velocity,y_velocity);
    bal->setColour(colour);
    bal->setMass(mass);
    bal->setRadius(radius);
}

ball* stage1BallBuilder::getBall()
{
    return bal;
}

