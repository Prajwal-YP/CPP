#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
int main()
{
    Shape s1("Shape-1");
    s1.Draw();
    Oval o1(10,3,"Oval-1");
    o1.Draw();
    Circle c1(50,"Circle-1");
    c1.Draw();

    std::cout<<"\n\nUSING STATIC BINDING POINTERS!!"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Shape *sp[3]={&s1,&o1,&c1};
    for(size_t i{};i<3;i++)
        sp[i]->Draw();


    std::cout<<"\n\nSIZES"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    std::cout<<sizeof(Shape)<<std::endl;
    std::cout<<sizeof(Oval)<<std::endl;
    std::cout<<sizeof(Circle)<<std::endl;
}
