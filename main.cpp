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