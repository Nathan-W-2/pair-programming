#include "Line.h"
#include <string>
#include <cmath>

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

float Line::length(){

	float sqRt = sqrt((startPoint.getXCoord() -  endPoint.getXCoord()) * (startPoint.getXCoord() - endPoint.getXCoord()) + (startPoint.getYCoord() - endPoint.getYCoord()) * (startPoint.getYCoord() - endPoint.getYCoord()));
	return sqRt;
}

float Line::length(Point a, Point b){
	float sqRt = sqrt((a.getXCoord() -  b.getXCoord()) * (a.getXCoord() - b.getXCoord()) + (a.getYCoord() - b.getYCoord()) * (a.getYCoord() - b.getYCoord()));
	return sqRt;
}

bool Line::isPointOnLine(Point p){
	float seg1Length = length(startPoint, p);
	float seg2Length = length(p, endPoint);
	
	float totalLength = length();

	return abs(totalLength - (seg1Length + seg2Length)) < 0.0001;
}

bool Line::isParallel(Line a, Line b){
	float slopeA = (a.endPoint.getYCoord() - a.startPoint.getYCoord()) / (a.endPoint.getXCoord() - a.startPoint.getXCoord());
	float slopeB = (b.endPoint.getYCoord() - b.startPoint.getYCoord()) / (b.endPoint.getXCoord() - b.startPoint.getXCoord());

	return abs(slopeA - slopeB) < .0001;
}

bool Line::doesIntersect(Line line1, Line line2){
	Point a = line1.startPoint; 
	Point b = line1.endPoint; 
	Point c = line2.startPoint; 
	Point d = line2.endPoint; 
	
	Point r = Point(b.getXCoord() - a.getXCoord(), b.getYCoord() - a.getYCoord());
	Point s = Point(d.getXCoord() - c.getXCoord(), d.getYCoord() - c.getYCoord());
	Point cMinusA = Point(c.getXCoord() - a.getXCoord(), c.getYCoord() - a.getYCoord());
	float rCrossS = line1.crossProduct(r, s);
	float u = line1.crossProduct(cMinusA, r) / rCrossS;
	float t = line1.crossProduct(cMinusA, s) / rCrossS;

	if ((u > 0 and u < 1) and (t > 0 and t < 1)) {
		return true; 
	} else {
		return false; 
	}
}


float Line::crossProduct(Point a, Point b) 
{
	return a.getXCoord() * b.getYCoord() - a.getYCoord() * b.getXCoord();
}