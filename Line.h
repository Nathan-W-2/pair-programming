#pragma once
#include <iostream>
#include <string>
#include "Point.h"

class Line {
public:
	Line(Point start, Point end);
	string toString();

	Point getStartPoint();
	Point getEndPoint();
private:

	Point startPoint;
	Point endPoint;
};