#pragma once
#include "dialog.h"
#include "table.h"
#include "ball.h"

class factory
{
public:
    factory(){}
    virtual ~factory(){}
    virtual table* createTable()=0;
    virtual std::vector<ball*> createBalls()=0;

};
