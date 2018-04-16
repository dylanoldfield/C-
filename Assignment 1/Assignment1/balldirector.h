#pragma once
#include "ballbuilder.h"


class ballDirector
{
public:
    virtual ~ballDirector(){}


    ballDirector(){}
    ballDirector(ballBuilder *builder): builder(builder){}

    // used to add a builder to the director to be reused
    void setBuilder(ballBuilder *builder){this->builder = builder;}
    ball* Construct();
private:
    ballBuilder *builder;
};
