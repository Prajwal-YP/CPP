#include <iostream>
#include "header.h"

int main()
{
    int a{12},b{76};

    std::cout<<"Max of "<<a<<" and "<<b<<" : "<<max(a,b)<<std::endl;
    std::cout<<"Min of "<<a<<" and "<<b<<" : "<<min(a,b)<<std::endl;
    std::cout<<"Sum of "<<a<<" and "<<b<<" : "<<sum(a,b)<<std::endl;
    std::cout<<"Product of "<<a<<" and "<<b<<" : "<<mul(a,b)<<std::endl;
}