#include <iostream>
#include "Animal.h"
#include "Feline.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Pigeon.h"
#include "Crow.h"

int main()
{
    Dog d1("cutie","gold fur");
    Cat c1("mushie","white fur");
    Pigeon p1("peoie","back&White wing");
    Crow cr1("Crowiee","darkBlack Wing");

    Animal *ap[]={&d1,&c1,&p1,&cr1};
    for(size_t i{};i<4;i++)
    {
        ap[i]->breath();
    }

    std::cout<<"\n----------------------------------------------------\n"<<std::endl;

    Bird *bp[]={&p1,&cr1};
    for(size_t i{};i<2;i++)
    {
        bp[i]->breath();
        bp[i]->fly();
    }

    std::cout<<"\n----------------------------------------------------\n"<<std::endl;

    Feline *fp[]={&d1,&c1};
    for(size_t i{};i<2;i++)
    {
        fp[i]->breath();
        fp[i]->run();
    }

    return 0;
}