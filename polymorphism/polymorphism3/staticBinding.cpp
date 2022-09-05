#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
int main()
{
    std::cout<<"\n\ns1"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Shape s1("Shape-1");
    s1.Draw();

    std::cout<<"\n\no1"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Oval o1(10,3,"Oval-1");
    o1.Draw();
    
    std::cout<<"\n\nc1"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Circle c1(50,"Circle-1");
    c1.Draw();

    std::cout<<"\n\ns2"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Shape s2=c1;

    // SLICING
    s2.Draw();

    std::cout<<"\nSize of s2 : "<<sizeof(s2)<<std::endl;
     
    std::cout<<"\n\nSIZES"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    std::cout<<"\nSize of Shape : "<<sizeof(Shape)<<std::endl;
    std::cout<<"\nSize of Oval : "<<sizeof(Oval)<<std::endl;
    std::cout<<"\nSize of Circle : "<<sizeof(Circle)<<std::endl;

    return 0;
}
