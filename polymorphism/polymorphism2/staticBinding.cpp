#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw(Shape& s)
{
    s.Draw();
}

int main()
{
    Shape s1("Shape-1");
    s1.Draw();
    Oval o1(10,3,"Oval-1");
    o1.Draw();
    Circle c1(50,"Circle-1");
    c1.Draw();

    std::cout<<"\n\nUSING Dynamic BINDING OF BASE POINTERS!!"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Shape *sp[3]={&s1,&o1,&c1};
    for(size_t i{};i<3;i++)
        sp[i]->Draw();


    std::cout<<"\n\nUSING Dynamic BINDING OF BASE POINTERS FUNCTION!!"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    Shape *sp1 = new Shape("Shape_New");
    Shape *sp2 = new Oval(10,50,"Oval_New");
    Shape *sp3 = new Circle(100,"Circle_New");

    draw(*sp1);
    draw(*sp2);
    draw(*sp3);

    delete sp1;
    delete sp2;
    delete sp3;
    sp1=nullptr;
    sp2=nullptr;
    sp3=nullptr;
    
    std::cout<<"\n\nSIZES"<<std::endl;
    std::cout<<"-------------------------------\n"<<std::endl;
    std::cout<<sizeof(Shape)<<std::endl;
    std::cout<<sizeof(Oval)<<std::endl;
    std::cout<<sizeof(Circle)<<std::endl;
}
