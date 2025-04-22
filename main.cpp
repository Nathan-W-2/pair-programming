#include <iostream>
#include <assert.h>
using namespace std;
#include "RationalNumber.h"

void creatingRationals();
void rationalToString();
void rationalReducedToString();

int main()
{
    creatingRationals();
    rationalToString();
    rationalReducedToString();

    cout<<"All tests pass"<<endl;
    return 0;
}
//--
void creatingRationals()
{
    RationalNumber num1(1, 2);
    assert(num1.toString() == "1/2");

    RationalNumber num2(3, 4);
    assert(num2.toString() == "3/4");

    RationalNumber num3(3, -4);
    assert(num3.toString() == "-3/4");

    RationalNumber num4(-3, 4);
    assert(num4.toString() == "-3/4");

    RationalNumber num5(-3, -4);
    assert(num5.toString() == "3/4");

    try
    {
        RationalNumber num6(3, 0);
        assert(false);
    }
    catch(...)
    {
        //do nothing
    }

    RationalNumber num7(10, 1);
    assert(num7.toString() == "10");
}

void rationalToString()
{
    RationalNumber num1(9, 5);
    assert(num1.toString() == "1 4/5");

    RationalNumber num2(19, 5);
    assert(num2.toString() == "3 4/5");

    RationalNumber num3(4, 5);
    assert(num3.toString() == "4/5");

    RationalNumber num4(4, 4);
    assert(num4.toString() == "1");

    RationalNumber num5(0, 7);
    assert(num5.toString() == "0");

    RationalNumber num6(8, 4);
    assert(num6.toString() == "2");

    RationalNumber num7(-4, 5);
    assert(num7.toString() == "-4/5");

    RationalNumber num8(4, -5);
    assert(num8.toString() == "-4/5");

    RationalNumber num9(-4, -5);
    assert(num9.toString() == "4/5");

    RationalNumber num10(8, -5);
    assert(num10.toString() == "-1 3/5");

    RationalNumber num11(-8, 5);
    assert(num11.toString() == "-1 3/5");

    RationalNumber num12(-8, -5);
    assert(num12.toString() == "1 3/5");

    RationalNumber num13(-8, -4);
    assert(num13.toString() == "2");

    RationalNumber num14(-8, -8);
    assert(num14.toString() == "1");

    RationalNumber num15(0, -8);
    assert(num15.toString() == "0");

    RationalNumber num17(-0, -8);
    assert(num17.toString() == "0");

    RationalNumber num18(-0, 8);
    assert(num18.toString() == "0");
}

void rationalReducedToString()
{
    RationalNumber num1(4, 8);
    assert(num1.reducedToString() == "1/2");

    RationalNumber num2(6, 8);
    assert(num2.reducedToString() == "3/4");

    RationalNumber num3(4, 6);
    assert(num3.reducedToString() == "2/3");

    RationalNumber num4(1, 2);
    assert(num4.reducedToString() == "1/2");

    RationalNumber num5(5, 7);
    assert(num5.reducedToString() == "5/7");

    RationalNumber num6(7, 5);
    assert(num6.reducedToString() == "1 2/5");

    RationalNumber num7(7, 7);
    assert(num7.reducedToString() == "1");

    RationalNumber num8(14, 7);
    assert(num8.reducedToString() == "2");

    RationalNumber num9(10, 8);
    assert(num9.reducedToString() == "1 1/4");

    RationalNumber num10(-4, 8);
    assert(num10.reducedToString() == "-1/2");

    RationalNumber num11(4, -8);
    assert(num11.reducedToString() == "-1/2");

    RationalNumber num12(-4, -8);
    assert(num12.reducedToString() == "1/2");
}
