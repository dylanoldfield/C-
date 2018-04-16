#pragma once
#include "vector.h"
#include "ball.h"
#include "stage1Factory.h"
/* this is the generic builder class to construct ball objects
 * it first constructs a ball object, then instantiates the attributes
 */

class ballBuilder{
public:
    virtual ~ballBuilder(){}
    virtual void buildBallShell()=0;
    virtual ball* getBall()=0;
protected:
    ball* bal;
};
