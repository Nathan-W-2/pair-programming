#include <iostream>
#include <assert.h>
using namespace std;
#include "Point.h"

void testPoints();

int main()
{
    testPoints();

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


    // RationalNumber num2(3, 4);
    // assert(num2.toString() == "3/4");

    // RationalNumber num3(3, -4);
    // assert(num3.toString() == "-3/4");

    // RationalNumber num4(-3, 4);
    // assert(num4.toString() == "-3/4");

    // RationalNumber num5(-3, -4);
    // assert(num5.toString() == "3/4");

    // try
    // {
    //     RationalNumber num6(3, 0);
    //     assert(false);
    // }
    // catch(...)
    // {
    //     //do nothing
    // }

    // RationalNumber num7(10, 1);
    // assert(num7.toString() == "10");
}