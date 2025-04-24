#pragma once
#include <string>
using namespace std;

class Point
{
public:
    Point();
    Point(float x, float y);
    
    string toString();

    float getXCoord();
    float getYCoord();
private:
    float x;
    float y;
    
    void setXCoordinate(float x);
    void setYCoordinate(float y);
};