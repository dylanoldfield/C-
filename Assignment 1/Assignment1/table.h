#pragma once
#include <string>

class table
{
public:
    table( std::string colour, float x, float y, float friction):
        colour(colour), x_size(x), y_size(y), friction(friction){}
    virtual ~table(){}

 float getFriction();
 float  getXsize();
 float getYsize();
 std::string getColour();


private:
    float friction;
    float x_size;
    float y_size;
    std::string colour;

};

