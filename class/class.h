#include "constants.cpp"
#include "classDetails.cpp"

void cylinder::setR(double a)
{
    r=a;
}

void cylinder::setH(double a)
{
    h=a;
}

double cylinder::getR()
{
    return r;
}

double cylinder::vol()
{
    return PI*r*r*h;
}

double cylinder::getH()
{
    return h;
}

cylinder::cylinder(double a,double b)
{
    r=a;    h=b;
}