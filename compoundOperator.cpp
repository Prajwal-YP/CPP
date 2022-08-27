#include <iostream>

int main()
{
    int a{5};

    std::cout<<"\ta\t: "<<a<<std::endl;
    a += 5;

    // COMPOUND OPERATORS
    std::cout<<"\ta += 5\t\ta\t= "<<a<<std::endl;
    a -= 5;
    std::cout<<"\ta -= 5\t\ta\t= "<<a<<std::endl;
    a *= 5;
    std::cout<<"\ta *= 5\t\ta\t= "<<a<<std::endl;
    a /= 5;
    std::cout<<"\ta /= 5\t\ta\t= "<<a<<std::endl;
    a %= 5+1;
    std::cout<<"\ta %= 5+1\t\ta\t= "<<a<<std::endl;

    return 0;
}