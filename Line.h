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
	float length(Point a, Point b);
	
	bool isParallel(Line a, Line b);
	bool doesIntersect(Line a, Line b);
	float crossProduct(Point a, Point b);

	Point getStartPoint();
	Point getEndPoint();
private:

	Point startPoint;
	Point endPoint;
};