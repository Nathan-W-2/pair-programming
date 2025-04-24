#pragma once
#include <iostream>
#include <string>
#include "Point.h"

class Line : public Point{
public:
	Line();
	Line(Point start, Point end);
	string toString();
	float length();
	bool isPointOnLine(Point p);

	Point getStartPoint();
	Point getEndPoint();
private:

	Point startPoint;
	Point endPoint;
};