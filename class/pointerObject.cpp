#include <iostream>
#include "class.h"

int main()
{
    //STACK OBJECT
    cylinder c1(10,10);
    std::cout<<"c1 Volume : "<<c1.vol()<<std::endl;

    //POINTER OBJECT
    cylinder *c2 = &c1;
    std::cout<<"c1 Volume : "<<(*c2).vol()<<std::endl;
    std::cout<<"c1 Volume : "<<c2->vol()<<std::endl;

    // HEAP POINTEROBJECT 
    cylinder *c3 = new cylinder(100,2);
    std::cout<<"c3 Radius : "<<c3->getR()<<std::endl;
    std::cout<<"c3 Height : "<<c3->getH()<<std::endl;
    std::cout<<"c3 Volume : "<<c3->vol()<<std::endl;
    delete c3;

    return 0;
}