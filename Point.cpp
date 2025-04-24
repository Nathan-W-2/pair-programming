#include "Point.h"
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(float x, float y)
{
    setXCoordinate(x);
    setYCoordinate(y);
}
//--
//--
void Point::setXCoordinate(float x)
{
    this->x = x;
}

void Point::setYCoordinate(float y)
{
    this->y = y;
}

string Point::toString()
{
    std::stringstream ss;
    ss << "X: ";
    ss << fixed << setprecision(1) << x; 
    ss << ", Y: ";
    ss << fixed << setprecision(1) << y; 
    // float roundedX = round(x * 10) / 10;
    // float roundedY = round(y * 10) / 10;

    return ss.str();
}
//--
