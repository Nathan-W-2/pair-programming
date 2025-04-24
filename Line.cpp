#include "Line.h"
#include <string>

Line::Line(){
	startPoint = Point(0,0);
	endPoint = Point(0,0);
}

Line::Line(Point start, Point end) 	
{
	startPoint = start;
	endPoint = end;
}

Point Line::getStartPoint() {
	return startPoint;
}

Point Line::getEndPoint() {
	return endPoint;
}

string Line::toString() {
	//Point 1: [X: 1.2, Y: 3.4], Point 2: [X: 5.6, Y: 7.8]
	return "Point 1: [" + startPoint.toString() + "], Point 2: [" + endPoint.toString() + "]";
}