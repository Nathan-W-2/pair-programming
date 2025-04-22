#pragma once
#include <string>
using namespace std;

class Point
{
public:
    Point(float x, float y);
    
    string toString();
private:
    float x;
    float y;
    
    void setXCoordinate(float x);
    void setYCoordinate(float y);
};