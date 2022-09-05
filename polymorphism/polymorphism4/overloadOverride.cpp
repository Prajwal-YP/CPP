#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
int main()
{
    std::cout<<"\n\nc1"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Circle c1(20,"Circle-1");
    // o1.Draw(100);

    // std::cout<<"\n\nc1"<<std::endl;
    // std::cout<<"-------------------------------\n"<<std::endl;
    // Circle c1(15,"Circle-2");
    // c1.Draw(200);

    Oval *op=&c1;
    op->Draw(100,200);

    return 0;
}
