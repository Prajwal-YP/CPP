#include <iostream>
#include "class.h"

cylinder::cylinder(float a,float b)
{
    r=a;    h=b;
    std::cout<<"\nConstructor for cylinder "<<this<<" with following details\nRadius "<<r<<"\nHeight "<<h<<std::endl;
}

cylinder::~cylinder()
{
    std::cout<<"\nDestructor for cylinder "<<this->r<<" with following details\nRadius "<<r<<"\nHeight "<<h<<std::endl;
}

int main()
{
    float a{10},b{20},c{30},h{20};

    cylinder c1(a,h);
    cylinder c2(b,h);
    cylinder c3(c,h);

    std::cout<<"Volume 1 : "<<c1.vol()<<std::endl;
    std::cout<<"Volume 2 : "<<c2.vol()<<std::endl;
    std::cout<<"Volume 3 : "<<c3.vol()<<std::endl;

    return 0;
}