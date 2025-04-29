#include <iostream>
#include <assert.h>
#include <cmath>
using namespace std;
#include "Point.h"
#include "Line.h"

void testPoints();
void testLine();
void testLength();
void testPointOnLine();
void testParallel();
void testIntersect();

int main()
{
    testPoints();
    testLine();
    testLength();
    testPointOnLine();
    testParallel();
    testIntersect();

    cout<<"All tests pass"<<endl;
    return 0;
}
//--
void testPoints()
{
    Point point1(1.2, 3.4);
    cout << point1.toString() << endl; 
    assert(point1.toString() == "X: 1.2, Y: 3.4");

    Point point2(1.24529043, 3.4394493);
    cout << point2.toString() << endl; 
    assert(point2.toString() == "X: 1.2, Y: 3.4");

    Point point3(1.24, 3.46);
    cout << point3.toString() << endl; 
    assert(point3.toString() == "X: 1.2, Y: 3.5");

    Point point4(1, 3);
    cout << point4.toString() << endl; 
    assert(point4.toString() == "X: 1.0, Y: 3.0");

    Point point5(-1.2, -3.4);
    cout << point5.toString() << endl; 
    assert(point5.toString() == "X: -1.2, Y: -3.4");

    Point point6(0, 0);
    cout << point6.toString() << endl; 
    assert(point6.toString() == "X: 0.0, Y: 0.0");

    Point point7(0.3, 0.4);
    cout << point7.toString() << endl; 
    assert(point7.toString() == "X: 0.3, Y: 0.4");
}

void testLine() {
    Line line1(Point(1.2, 3.4), Point(5.6, 7.8));
    cout << line1.toString() << endl;
    assert(line1.toString() == "Point 1: [X: 1.2, Y: 3.4], Point 2: [X: 5.6, Y: 7.8]");

    Line line2(Point(-1.2, -3.4), Point(-5.6, -7.8));
    cout << line2.toString() << endl;
    assert(line2.toString() == "Point 1: [X: -1.2, Y: -3.4], Point 2: [X: -5.6, Y: -7.8]");

    Line line3(Point(1, 3), Point(5, 7));
    cout << line3.toString() << endl;
    assert(line3.toString() == "Point 1: [X: 1.0, Y: 3.0], Point 2: [X: 5.0, Y: 7.0]");
}

void testLength(){
    Line line4(Point(123.433, 445.456), Point(432.543, 456.787));
    cout << line4.length() << endl;
    assert(abs(line4.length() - 309.31760968461) < 0.001);

    Line line1(Point(1.2, 3.4), Point(5.6, 7.8));
    cout << line1.length() << endl;
    assert(abs(line1.length() - 6.2225396744416) < 0.001);
}

void testPointOnLine(){
    Line line1(Point(1,1), Point(5,5));
    Point point1(2,2);
    assert(line1.isPointOnLine(point1) == 1);

    Line line2(Point(1,1), Point(5,5));
    Point point2(3,4);
    assert(line2.isPointOnLine(point2) == 0);

    assert(line2.isPointOnLine(Point(1,1)) == 1);
    assert(line2.isPointOnLine(Point(5,5)) == 1);

    Line line3(Point(103.2, 33.40), Point(345.62, 7.8456));
    Point point3(132.6,30.30096);
    Point point4(186.4, 24.62994);
    Point point5(240, 19.1);
    assert(line3.isPointOnLine(point3) == 1);
    assert(line3.isPointOnLine(point4) == 1);
    assert(line3.isPointOnLine(point5) == 0);

}

void testParallel(){
    Line line1(Point(1,1), Point(10,10));
    Line line2(Point(0,5), Point(10,15));

    assert(line1.isParallel(line1, line2) == 1);

    Line line3(Point(0,0), Point(1.4, 10.283));
    Line line4(Point(1, 12.345), Point(2.2, 21.159));
    assert(line3.isParallel(line3, line4) == 1);

    Line line6(Point(1, 12.345), Point(50.2, 21.159));
    assert(line3.isParallel(line3, line6) == 0);

    Line negSlope1(Point(-4,10), Point(4, -10));
    Line negSlope2(Point(-1, -2.5), Point(-1.6, -1.0));
    assert(negSlope1.isParallel(negSlope1, negSlope2) == 1);
}

void testIntersect() {
    Line line1(Point(2.6,5.3), Point(-2.45,-4.2));
    Line line2(Point(2.4,1.6), Point(-5,-2));

    assert(line1.doesIntersect(line1, line2) == true);

    Line line3(Point(2.4,1.6), Point(2.9,-1.1));

    assert(line1.doesIntersect(line1, line3) == false);

    Line line4(Point(2.6,5.3), Point(4,1.5));
    Line line5(Point(4.1,2.4), Point(2.9,-1.1));

    assert(line4.doesIntersect(line4, line5) == true);

    Line line6(Point(0.9,5.6), Point(6.5,2.2));
    Line line7(Point(4.1,2.43), Point(2.9,1.3));

    assert(line6.doesIntersect(line6, line7) == false);
}