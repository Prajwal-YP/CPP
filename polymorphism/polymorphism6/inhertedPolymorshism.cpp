#include <iostream>
#include "Shape.h"
#include "Eclipse.h"

int main()
{
    // Shape s1("Shape-1");
    // s1.Draw();
    // s1.count();
    // std::cout<<"\n------------------------------------------------\n";
    // Eclipse e1("Eclipse-1");
    // e1.Draw();
    // e1.count();

    Shape s[100];
    Eclipse e1("Eclipse-1");
    Eclipse e[20];

    // TOTAL 21-Eclipse and 121-Shapes

    Shape finals("DoneShape");
    Eclipse finale("DoneEclipse");

    // UPDATED TOTAL 22-Eclipse and 123-Shapes
    
    finals.count();
    std::cout<<"\n------------------------------------------------\n";
    finale.count();

    // VERIFIED!!

    return 0;
}